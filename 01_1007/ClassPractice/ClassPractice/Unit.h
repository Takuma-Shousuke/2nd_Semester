#ifndef UNIT_H
#define UNIT_H

#include"Common.h"

#endif // #ifndef COMMON_H

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

	int m_hp;
	int m_tec;
	int m_luc;
	int m_str;
	int m_spd;
	int m_mde;
	int m_mag;
	int m_def;
};
