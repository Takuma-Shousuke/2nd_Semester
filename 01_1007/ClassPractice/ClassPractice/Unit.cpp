
#include"Unit.h"
#include"Common.h"
#include"Definition.h"

Unit::Unit()
{
	status._hp = 0;
	status._tec = 0;
	status._luc = 0;
	status._str = 0;
	status._spd = 0;
	status._mde = 0;
	status._mag = 0;
	status._def = 0;
}
Unit::~Unit()
{

}
void Unit::PrintStatus()
{
	printf("Unit‚ÌHP‚Í%d‚Å‚·\n", status._hp);
	printf("Unit‚ÌTEC‚Í%d‚Å‚·\n", status._tec);
	printf("Unit‚ÌLUC‚Í%d‚Å‚·\n", status._luc);
	printf("Unit‚ÌSTR‚Í%d‚Å‚·\n", status._str);
	printf("Unit‚ÌSPD‚Í%d‚Å‚·\n", status._spd);
	printf("Unit‚ÌMDE‚Í%d‚Å‚·\n", status._mde);
	printf("Unit‚ÌMAG‚Í%d‚Å‚·\n", status._mag);
	printf("Unit‚ÌDEF‚Í%d‚Å‚·\n", status._def);
}
