#include <decaf/util/concurrent/CountDownLatch.h>
#include <decaf/lang/Long.h>
#include <decaf/util/Date.h>
#include <activemq/core/ActiveMQConnectionFactory.h>
#include <activemq/util/Config.h>
#include <activemq/library/ActiveMQCPP.h>
#include <cms/Connection.h>
#include <cms/Session.h>
#include <cms/TextMessage.h>
#include <cms/BytesMessage.h>
#include <cms/MapMessage.h>
#include <cms/ExceptionListener.h>
#include <cms/MessageListener.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <memory>
#include<QObject>
#include <QTimer>
using namespace activemq;
using namespace activemq::core;
using namespace decaf;
using namespace decaf::lang;
using namespace decaf::util;
using namespace decaf::util::concurrent;
using namespace cms;
using namespace std;
class WebCommServer:public QObject,public ExceptionListener,public MessageListener
{
	Q_OBJECT
public:
	WebCommServer();
	~WebCommServer();
	bool start();
    bool initialize();
	void close();
	void cleanup();
	virtual void onMessage(const Message* message);
	virtual void onException(const CMSException& ex AMQCPP_UNUSED);
	virtual void transportResumed();
	virtual void transportInterrupted();//连接恢复
	std::string UserName;
	std::string Password;
	Connection* connection;
	Session* session;
	Destination* destination;
	MessageConsumer* consumer;
	bool useTopic;
	bool clientAck;
	std::string brokerURI;
	std::string destURI;
private: 
	bool m_IsConnected;
	//重连定时器
	QTimer *ReconnectTimer;
signals:
	//通知UI读取设备参数指令
	void NoticfyServerFacilityID(QString UID,int ServiceTypeID, QString StationID, QString DeviceID, int Command, QStringList CommLst);
};

