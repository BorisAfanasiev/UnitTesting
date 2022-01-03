#pragma once

class ClassLab6_Afanasiev
{
public:		//Opened for testing, should be closed on release.
	double m_x;
	double m_y;
public:
	ClassLab6_Afanasiev(double x = 0.0, double y = 0.0) : m_x{ x }, m_y{ y } {}

	double getX() const { return m_x; }
	double getY() const { return m_y; }
	double getArea() const { return m_x * m_y; }

	void setX(double x) { m_x = x; }
	void setY(double y) { m_y = y; }
};