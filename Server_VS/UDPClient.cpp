#include "UDPClient.h"
#include<qDebug>
#define TIMEOUT 14*1000


UDPClient::UDPClient(QObject *parent)
	: QObject(parent)
{
	Count = 0;
	m_IsActive = true;
}

UDPClient::~UDPClient()
{
	qDebug() << "udpclient is deleted" ;
}

//���ò���
void UDPClient::SetParams(SOCKADDR_IN UDP_Addr,int ServiceID,QString StationID,QString DeviceID)
{
	m_UDP_Addr = UDP_Addr;
	m_ServiceID = ServiceID;
	m_StationID = StationID;
	m_DeviceID = DeviceID;
	m_TimerId = startTimer(TIMEOUT);
}
//��ȡҵ���
int UDPClient::GetServiceID()
{
	return m_ServiceID;
}
//��ȡ̨վ��
QString UDPClient::GetStationID()
{
	return m_StationID;
}
//��ȡ�豸��
QString UDPClient::GetDeviceID()
{
	return m_DeviceID;
}
//��ȡUDP
SOCKADDR_IN UDPClient::GetUDP_Addr()
{
	return m_UDP_Addr;
}
//��ʱ�жϣ�����ʱ�޷����������Ƴ�
void UDPClient::timerEvent(QTimerEvent *event)
{
	//�ж������Ƿ�ʱ
	if (++Count < TIMEOUT)
		return;
   // ��ʱ��Ӧ
	killTimer(m_TimerId);
	m_IsActive = false;
}

bool UDPClient::IsActive()
{
	return m_IsActive;
}