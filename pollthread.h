#pragma once
#ifndef POLLTHREAD_H
#define POLLTHREAD_H

#include <QThread>
#include <QMutex>
#include "globalvar.h"

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


#endif // !POLLTHREAD_H

