
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
	printf("Unit��HP��%d�ł�\n", status._hp);
	printf("Unit��TEC��%d�ł�\n", status._tec);
	printf("Unit��LUC��%d�ł�\n", status._luc);
	printf("Unit��STR��%d�ł�\n", status._str);
	printf("Unit��SPD��%d�ł�\n", status._spd);
	printf("Unit��MDE��%d�ł�\n", status._mde);
	printf("Unit��MAG��%d�ł�\n", status._mag);
	printf("Unit��DEF��%d�ł�\n", status._def);
}
