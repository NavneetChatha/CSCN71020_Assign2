#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"

extern "C" int getPerimeter(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest001
{
	TEST_CLASS(UnitTest001)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			//Testing if the perimeter is correct for a standard rectangle with the width of 5 and length of 10
			int length1 = 10;
			int width1 = 5;
			int perimeter1 = getPerimeter(&length1, &width1);
			Assert::AreEqual(30, perimeter1);
		}
		TEST_METHOD(GetAreaTest)
		{
			// Testing if the area is correct for a standard rectangle with the width of 5 and length of 10
			int length1 = 10;
			int width1 = 5;
			int area1 = getArea(&length1, &width1);
			Assert::AreEqual(50, area1);
		}
	};
}
