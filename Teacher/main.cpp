#include <iostream>
#include <Windows.h>			//ukr language + Beep()
#include <fstream>
#include <math.h>				//fabs() for approximation comparsion
#include "ModulesAfanasievPublicMembers.h"


void unitTesting()
{

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

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

	//Testing class "ClassLab6_Afanasiev"
	std::ofstream testResult{ "..\\TestSuite\\TestResults.txt" };		//File to store test results.
	try
	{	//Test Case: #0101
		ClassLab6_Afanasiev constructorDefault{};
		if (constructorDefault.m_x == 0.00 && constructorDefault.m_y == 0.0)
		{
			testResult << "#0101 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0101 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0102
		ClassLab6_Afanasiev constructorSingleParameter{ 1.234 };
		if (constructorSingleParameter.m_x == 1.234)
		{
			testResult << "#0102 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0102 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0103
		ClassLab6_Afanasiev constructorBouthParameters{ 1.234, 9.876 };
		if (constructorBouthParameters.m_x == 1.234 && constructorBouthParameters.m_y == 9.876)
		{
			testResult << "#0103 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0103 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0104
		ClassLab6_Afanasiev methodGetX{ 1.234, 0.0 };
		if (methodGetX.m_x == 1.234)
		{
			testResult << "#0104 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0104 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0105
		ClassLab6_Afanasiev methodGetY{ 0.0, 9.876 };
		if (methodGetY.m_y == 9.876)
		{
			testResult << "#0105 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0105 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	try
	{	//Test Case: #0106
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
	{	//Test Case: #0107
		ClassLab6_Afanasiev methodSetX{ 0.0, 0.0 };
		methodSetX.setX(1.234);
		if (methodSetX.m_x == 1.234)
		{
			testResult << "#0106 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0106 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }
	
	try
	{	//Test Case: #0108
		ClassLab6_Afanasiev methodSetY{ 0.0, 0.0 };
		methodSetY.setY(9.876);
		if (methodSetY.m_x == 9.876)
		{
			testResult << "#0106 - Passed!" << std::endl;
		}
		else { throw std::runtime_error("#0106 - Failed!"); }
	}
	catch (const std::exception& exception) { testResult << exception.what() << std::endl; }

	std::cout << "Testing finished!";
	return 0;
}