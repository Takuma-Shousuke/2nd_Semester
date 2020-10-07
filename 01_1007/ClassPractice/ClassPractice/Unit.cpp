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
	printf("Unit‚ÌHP‚Í%d‚Å‚·\n", m_hp);
	printf("Unit‚ÌTEC‚Í%d‚Å‚·\n", m_tec);
	printf("Unit‚ÌLUC‚Í%d‚Å‚·\n", m_luc);
	printf("Unit‚ÌSTR‚Í%d‚Å‚·\n", m_str);
	printf("Unit‚ÌSPD‚Í%d‚Å‚·\n", m_spd);
	printf("Unit‚ÌMDE‚Í%d‚Å‚·\n", m_mde);
	printf("Unit‚ÌMAG‚Í%d‚Å‚·\n", m_mag);
	printf("Unit‚ÌDEF‚Í%d‚Å‚·\n", m_def);
}