#include "UDPClientList.h"
#include<QMutex>
#include<qDebug>
#define TIMEOUT 14
QMutex time_mutex;//���л����� 
UDPClientList::UDPClientList()
{
	
}

UDPClientList::~UDPClientList()
{
}

//��ȡ��Ӧ��ַ��������ַ�Ӷ����Ƴ�
SOCKADDR_IN  UDPClientList::GetClient(QString ServiceID,QString StationID,QString DeviceID)
{
	time_mutex.lock();
	SOCKADDR_IN from;
	//ͨ��ҵ��̨վ�ź��豸�Ų���UDP��
	
	/*for (int i = clients.count()-1; i >=0; i++)
	{
		if (clients[i].GetServiceID() == ServiceID.toInt() && clients[i].GetStationID() == StationID&&clients[i].GetDeviceID() == DeviceID)
		{
			if (clients[i].IsActive())
			{
				from = clients[i].GetUDP_Addr();
				//RemoveItem(clients[i]);
				break;
			}
		}
	}*/
	time_mutex.unlock();
	//qDebug() << "get client number is:" << clients.count();
	return from;
}
//���UDP���ӵ�ַ
void UDPClientList::AddClient(UDPClient client)
{
	//QList<UDPClient>::iterator it;
	//clients.insert(it, client);
	////s.append()
	//connect(&client, SIGNAL(remove(UDPClient)),this , SLOT(Pop(UDPClient)));

	//qDebug() << "add client number is:" << clients.count();
}


//��ʱ�жϣ�����ʱ�޷����������Ƴ�
/*void UDPClientList::CheckTimeOut()
{
	time_mutex.lock();
	for (int i = clients.count() - 1; i >= 0; i--)
	{
		if (++clients[i].Count > TIMEOUT)
			clients.removeAt(i);
	}

	if (clients.count() == 0)
		timer->stop();
	qDebug() << "time check number is:" << clients.count();
	time_mutex.unlock();
}*/
