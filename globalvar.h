#pragma once
#ifndef GLOBALVAR_H
#define GLOBALVAR_H

#include "jointcontrol.h"

#define ID_1	1
#define ID_2	2
#define ID_3	3
#define ID_4	4
#define ID_5	5

#define JOINT_NUM 1

class GlobalVar
{
public:
	GlobalVar();
	~GlobalVar();

public:
	static JointControl* Joint1;
	static JointControl* Joint2;
	static JointControl* Joint3;
	static JointControl* Joint4;
	static JointControl* Joint5;
	static JointControl*  Joints[5];
};


#endif // !GLOBALVAR_H