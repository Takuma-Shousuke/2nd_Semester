#ifndef UNIT_H
#define UNIT_H

#include"Common.h"
#include"Definition.h"



/* 
�����t�@�N�^�����O�@���̂Q
�E�����o�ϐ���private�A�N�Z�X�ɂ���
�Evoid PrintStatus() �Ƃ��������o�֐���p�ӂ��āA
�@���̊֐����Ăяo���ƁA�p�����[�^����ʂɕ\�������
 */



class Unit
{
public:
	Unit();
	~Unit();

	void PrintStatus();
private:
	
	Status status;
};
#endif // #ifndef COMMON_H