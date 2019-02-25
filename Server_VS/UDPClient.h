#pragma once

#include <QObject>
#include<QTimer>
#include"param.h"

class UDPClient : public QObject
{
	Q_OBJECT

public:
	UDPClient(QObject *parent);
	~UDPClient();
private:
	int m_TimerId;//��ʱ��ʱ��
	SOCKADDR_IN m_UDP_Addr;//UDP��ַ	
    int Count;//��ʱ������
	int m_ServiceID;//ҵ���
	QString m_StationID;//��վ��
	QString m_DeviceID;//�豸��
	bool m_IsActive;
	virtual void timerEvent(QTimerEvent *event);
public:
	void SetParams(sockaddr_in udp_addr, int serviceid, QString stationid, QString deviceid);
	int GetServiceID();//��ȡҵ���
	QString GetStationID();//��ȡ̨վ��
	QString GetDeviceID();//��ȡ�豸��
	SOCKADDR_IN GetUDP_Addr();//��ȡudp��ַ
    bool IsActive();//��ȡ����״̬
};
