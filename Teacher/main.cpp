#include <iostream>
#include <Windows.h>			//ukr language + Beep() //rem later
#include <fstream>
#include <math.h>				//fabs() for approximation comparsion
#include "..\prj\ModulesAfanasiev.h"

void ModulesAfanasievTest()
{
	std::ofstream testResult{ "..\\TestSuite\\TestResults.txt" };		//File to store test results.
	try
	{	//Test Case: #0101
		ClassLab6_Afanasiev constructorDefault{};
		if (constructorDefault.getX() == 0.00 && constructorDefault.getY() == 0.0)
		{
			testResult << "#0101 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0101 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0102
		ClassLab6_Afanasiev constructorSingleParameter{ 1.234 };
		if (constructorSingleParameter.getX() == 1.234)
		{
			testResult << "#0102 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0102 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0103
		ClassLab6_Afanasiev constructorBouthParameters{ 1.234, 9.876 };
		if (constructorBouthParameters.getX() == 1.234 && constructorBouthParameters.getY() == 9.876)
		{
			testResult << "#0103 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0103 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0104
		ClassLab6_Afanasiev methodGetArea{ 1.234, 9.876 };
		double epsilon{ 0.001 };		//Variable for approximation comparison.
		if (fabs(methodGetArea.getArea() - 12.187) < epsilon)
		{
			testResult << "#0106 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0106 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0105
		ClassLab6_Afanasiev methodSetX{ 0.0, 0.0 };
		methodSetX.setX(1.234);
		if (methodSetX.getX() == 1.234)
		{
			testResult << "#0106 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0106 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0106
		ClassLab6_Afanasiev methodSetY{ 0.0, 0.0 };
		methodSetY.setY(9.876);
		if (methodSetY.getY() == 9.876)
		{
			testResult << "#0106 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0106 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	//babushka, vodka, martoshka

	//Testing placement of main.cpp
	std::ifstream mainCPPDirectoryTest{ "..\\..\\Lab6\\prj\\main.cpp" };		//Directory to look for main.cpp.
	if (!mainCPPDirectoryTest)		//Testing is main.cpp could be accessed from Lab6\\prj\\ directory.
	{	//File not found in set directory. Alarm + termination of the program with error code.
		std::cout << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
		for (size_t iteration = 0; iteration < 100; iteration++)
		{
			Beep(500, 100);
		}
		return -1;
	}

	try
	{	//Testing class "ClassLab6_Afanasiev"
		std::cout << "Tests initiated...";
		ModulesAfanasievTest();
		std::cout << "Tests done!";
	}
	catch (...) { std::cerr << "Error: Exception fallthrough"; }

	return 0;
}