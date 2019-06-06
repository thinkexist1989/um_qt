#include "pollthread.h"

QMutex mutex;

PollThread::PollThread(QObject *parent)
	: QThread(parent), bStop(false)
{
}

PollThread::~PollThread()
{
	bStop = true;
}

void PollThread::run()
{
	while (!bStop)
	{
		mutex.lock();
		for (int i = 0; i < 1; i++) {
			GlobalVar::Joints[i]->GetCurrentPosition();
		}
		mutex.unlock();
		emit DataReady();
		msleep(50);
	}
}
