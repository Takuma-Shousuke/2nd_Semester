
#include<stdlib.h>
#include<stdio.h>

class Fighter
{
public:
	Fighter();
		~Fighter();

	int m_hp;
	int m_tec;
	int m_luc;
	int m_str;
	int m_spd;
	int m_mde;
	int m_mag;
	int m_def;
};

Fighter::Fighter()
{
	// 各変数を0初期化
	m_hp  = 0;
	m_tec = 0;
	m_luc = 0;
	m_str = 0;
	m_spd = 0;
	m_mde = 0;
	m_mag = 0;
	m_def = 0;
}

Fighter::~Fighter()
{
}

int main()
{
	Fighter fighter;
	
	// fighter内の各変数をprintfで出力する

		printf("ファイターのHPは%dです\n" ,fighter.m_hp );
		printf("ファイターのTECは%dです\n", fighter.m_tec);
		printf("ファイターのLUCは%dです\n", fighter.m_luc);
		printf("ファイターのSTRは%dです\n", fighter.m_str);
		printf("ファイターのSPDは%dです\n", fighter.m_spd);
		printf("ファイターのMDEは%dです\n", fighter.m_mde);
		printf("ファイターのMAGは%dです\n", fighter.m_mag);
		printf("ファイターのDEFは%dです\n", fighter.m_def);

	system("pause");
	return 0;
}