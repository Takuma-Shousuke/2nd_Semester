#ifndef UNIT_H
#define UNIT_H

#include"Common.h"

#endif // #ifndef COMMON_H

/* 
■リファクタリング　その２
・メンバ変数をprivateアクセスにする
・void PrintStatus() というメンバ関数を用意して、
　その関数を呼び出すと、パラメータが画面に表示される
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
