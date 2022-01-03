#pragma once

class ClassLab6_Afanasiev
{
private:
	double m_x;
	double m_y;
public:
	ClassLab6_Afanasiev(double x = 0.0, double y = 0.0) : m_x{ x }, m_y{ y } {};

	double getX() const;
	double getY() const;
	double getArea() const;

	void setX(double x = 0.0);
	void setY(double y = 0.0);
};