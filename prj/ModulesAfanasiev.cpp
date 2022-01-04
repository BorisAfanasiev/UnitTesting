#include "ModulesAfanasiev.h"

const double ClassLab6_Afanasiev::getX() const
{
	return m_x;
}

const double ClassLab6_Afanasiev::getY() const
{
	return m_y;
}

const double ClassLab6_Afanasiev::getArea() const
{
	if (m_x <= 0 || m_y <= 0)
	{
		return 0;
	}
	return m_x * m_y;
}

void ClassLab6_Afanasiev::setX(double x)
{
	m_x = x;
}

void ClassLab6_Afanasiev::setY(double y)
{
	m_y = y;
}