#include <iostream>
#include <Windows.h>			//ukr language + Beep() //rem later
#include <fstream>
#include "..\prj\ModulesAfanasiev.h"
#include "TestClass.h"
#include "TestSuite.h"

void checkthing()		//Testing placement of main.cpp
{	
	std::ifstream mainCPPDirectoryTest{ "..\\..\\Lab6\\prj\\main.cpp" };		//Directory to look for main.cpp.
	if (!mainCPPDirectoryTest)		//Testing main.cpp accessibility from Lab6/prj/ directory.
	{	//File not found in set directory. Alarm + termination of the program with error code.
		std::cout << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
		for (size_t iteration = 0; iteration < 100; iteration++)
		{
			Beep(500, 100);
		}
		exit(-1);
	}
}



void runTests()
{
	testConstructorDefault();
	testConstructorParameters();

	testGetX();
	testGetY();
	testGetArea();

	testSetX();
	testSetY();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	checkthing();

	runTests();
	
}
