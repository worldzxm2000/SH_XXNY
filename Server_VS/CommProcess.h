#pragma once

#include <QObject>
using namespace std;
class CommProcess : public QObject
{
	Q_OBJECT

public:
	CommProcess(QObject *parent);
	~CommProcess();
	//����Web��������
	void WebCommToFacility(string WebComm);
	//�����豸����ֵ
	void FacilityValueToWeb();
};
