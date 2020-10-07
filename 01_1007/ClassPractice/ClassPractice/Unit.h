#ifndef UNIT_H
#define UNIT_H

#include"Common.h"
#include"Definition.h"



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
	
	Status status;
};
#endif // #ifndef COMMON_H