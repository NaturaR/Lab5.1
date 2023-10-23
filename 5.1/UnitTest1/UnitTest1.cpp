#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 3.0;
			double c = 4.0;
			double one = (a * a + sin(b) + 1) / 1 + c * c;
			double actual = g(a, b, c);

			Assert::AreEqual(one, actual);
		}
	};
}
