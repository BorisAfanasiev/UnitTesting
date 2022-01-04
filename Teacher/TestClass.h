#pragma once
#include <string>
#include <fstream>

class Test
{
private:
	const std::string m_resultLog = "Test Log.txt";
public:
	Test() {};

	void isEqual(double expectedResult, double actualResult, int testCaseID)
	{
		static std::ofstream testResults{ m_resultLog };
		if (expectedResult == actualResult)
		{
			std::cout << "Test #" << testCaseID << " - Passed!" << std::endl;
			testResults << "Test #" << testCaseID << " - Passed!" << std::endl;
		}
		else
		{
			std::cout << "Test #" << testCaseID << " - Failed!"
				"\nDetails:\nexpectedResult == " << expectedResult << "\tactualResult == " << actualResult << std::endl;

			testResults << "Test #" << testCaseID << " - Failed!"
				"\nDetails:\nexpectedResult == " << expectedResult << "\tactualResult == " << actualResult << std::endl;
		}
	}
};