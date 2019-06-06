#include "globalvar.h"



GlobalVar::GlobalVar()
{
}


GlobalVar::~GlobalVar()
{
}

JointControl* GlobalVar::Joint1 = new JointControl(ID_1);
JointControl* GlobalVar::Joint2 = new JointControl(ID_2);
JointControl* GlobalVar::Joint3 = new JointControl(ID_3);
JointControl* GlobalVar::Joint4 = new JointControl(ID_4, 100, 1800);
JointControl* GlobalVar::Joint5 = new JointControl(ID_5, 700, 2500);

JointControl*  GlobalVar::Joints[5] = { GlobalVar::Joint1, GlobalVar::Joint2, GlobalVar::Joint3, GlobalVar::Joint4, GlobalVar::Joint5 };