#include"Unit.h"
#include"Common.h"

Unit::Unit()
{
	m_hp = 0;
	m_tec = 0;
	m_luc = 0;
	m_str = 0;
	m_spd = 0;
	m_mde = 0;
	m_mag = 0;
	m_def = 0;
}
Unit::~Unit()
{

}
void Unit::PrintStatus()
{
	printf("Unit��HP��%d�ł�\n", m_hp);
	printf("Unit��TEC��%d�ł�\n", m_tec);
	printf("Unit��LUC��%d�ł�\n", m_luc);
	printf("Unit��STR��%d�ł�\n", m_str);
	printf("Unit��SPD��%d�ł�\n", m_spd);
	printf("Unit��MDE��%d�ł�\n", m_mde);
	printf("Unit��MAG��%d�ł�\n", m_mag);
	printf("Unit��DEF��%d�ł�\n", m_def);
}