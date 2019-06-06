#include "pollthread.h"

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
		for (int i = 0; i < JOINT_NUM; i++) {
			GlobalVar::Joints[i]->GetCurrentPosition();
		}
		emit DataReady();
		msleep(50);
	}
}
