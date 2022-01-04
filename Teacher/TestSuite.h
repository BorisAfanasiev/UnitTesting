#pragma once

#define IS_EQUAL(expectedResult, actualResult) Test().isEqual(expectedResult, actualResult, testCaseID++)

void testConstructorDefault()
{
	int testCaseID{ 100000 };

	double result = ClassLab6_Afanasiev().getX();
	IS_EQUAL(0.0, result);
	result = ClassLab6_Afanasiev().getY();
	IS_EQUAL(0.0, result);
}
void testConstructorParameters()
{
	int testCaseID{ 200000 };

	double result = ClassLab6_Afanasiev(2.0, 3.0).getX();
	IS_EQUAL(2.0, result);
	result = ClassLab6_Afanasiev(2.0, 3.0).getY();
	IS_EQUAL(3.0, result);
	result = ClassLab6_Afanasiev(-2.0, -3.0).getX();
	IS_EQUAL(-2.0, result);
	result = ClassLab6_Afanasiev(-2.0, -3.0).getY();
	IS_EQUAL(-3.0, result);
}

void testGetX()
{
	int testCaseID{ 300000 };

	double result = ClassLab6_Afanasiev(2.0, 3.0).getX();
	IS_EQUAL(2.0, result);
	result = ClassLab6_Afanasiev(-2.0, -3.0).getX();
	IS_EQUAL(-2.0, result);

}

void testGetY()
{
	int testCaseID{ 400000 };
	double result = ClassLab6_Afanasiev(2.0, 3.0).getY();
	IS_EQUAL(3.0, result);
	result = ClassLab6_Afanasiev(-2.0, -3.0).getY();
	IS_EQUAL(-3.0, result);
}

void testGetArea()
{
	int testCaseID{ 500000 };

	double result = ClassLab6_Afanasiev(1.0, 1.0).getArea();
	IS_EQUAL(1.0, result);
	result = ClassLab6_Afanasiev(-1.0, -1.0).getArea();
	IS_EQUAL(0.0, result);
	result = ClassLab6_Afanasiev(0.0, -1.0).getArea();
	IS_EQUAL(0.0, result);
	result = ClassLab6_Afanasiev(-1.0, 0.0).getArea();
	IS_EQUAL(0.0, result);
	result = ClassLab6_Afanasiev(0.0, 0.0).getArea();
	IS_EQUAL(0.0, result);
	result = ClassLab6_Afanasiev(2.0, 3.0).getArea();
	IS_EQUAL(6.0, result);
	result = ClassLab6_Afanasiev(3.0, 2.0).getArea();
	IS_EQUAL(6.0, result);
}

void testSetX()
{
	int testCaseID{ 600000 };

	{
		ClassLab6_Afanasiev test{};
		test.setX(2.0);
		double result = test.getX();
		IS_EQUAL(2.0, result);
	}
	{
		ClassLab6_Afanasiev test{};
		test.setX(0.0);
		double result = test.getX();		//broken
		IS_EQUAL(0222.0, result);
	}
	{
		ClassLab6_Afanasiev test{};
		test.setX(-2.0);
		double result = test.getX();
		IS_EQUAL(-2.0, result);
	}
}

void testSetY()
{
	int testCaseID{ 700000 };

	{
		ClassLab6_Afanasiev test{};
		test.setY(2.0);
		double result = test.getY();
		IS_EQUAL(2.0, result);
	}
	{
		ClassLab6_Afanasiev test{};
		test.setY(0.0);
		double result = test.getY();
		IS_EQUAL(0.0, result);
	}
	{
		ClassLab6_Afanasiev test{};
		test.setY(-2.0);
		double result = test.getY();
		IS_EQUAL(-2.0, result);
	}
}