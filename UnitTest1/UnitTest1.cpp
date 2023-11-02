#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.4.rk/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMEthod1)
		{
			int n = 5;
			double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
			int result = calculate_negative_count(testArray, 0, n, 0);
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestMethod2)
		{
			int n = 5;
			double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
			double result = calculate_sum_of_modulus(testArray, 0, n, 0);
			Assert::AreEqual(27.0, result);
		}

		TEST_METHOD(TestMthod3)
		{
			int n = 5;
			double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
			replace_elements_with_squares(testArray, 0, n);

			
		}

		TEST_METHOD(TestMethod4)
		{
			int n = 5;
			double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
			recursive_sort(testArray, n);

			
		}
	};
}