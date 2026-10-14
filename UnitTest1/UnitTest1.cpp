#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            double a = 1.0;
            double b = 2.0;
            double expected = sin(a * b) / (a * a + b * b);

            double actual = g(a, b);

            Assert::AreEqual(expected, actual, 0.00001);
		}
	};
}
