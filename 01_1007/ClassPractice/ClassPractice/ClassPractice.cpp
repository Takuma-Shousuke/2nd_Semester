#include"Common.h"
#include"Unit.h"
/*
■リファクタリング　その①
・クラス名を Unit という、より相応しいものに変更する
・Unit.cppとUnit.hを作成して、クラスの宣言と、実装をそちらへ移す
・stdlib.hとstdio.h
*/
int main()
{
	Unit unit;
	unit.PrintStatus();

	system("pause");
	return 0;
}
