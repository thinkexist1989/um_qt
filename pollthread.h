#pragma once

#include <QThread>
#include <QMutex>
#include "globalvar.h"

extern QMutex mutex;

class PollThread : public QThread
{
	Q_OBJECT

public:
	PollThread(QObject *parent);
	~PollThread();

	bool bStop;

protected:
	void run();


signals:
	void DataReady();
};
