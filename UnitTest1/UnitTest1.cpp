#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../lab 6.4.it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(TestMethod1)
        {
            double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
            int result = calculate_negative_count(testArray, 5);
            Assert::AreEqual(3, result);
        }

        TEST_METHOD(TestMethod2)
        {
            double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
            double result = calculate_sum_of_modulus(testArray, 5);
            Assert::AreEqual(27.0, result);
        }

        TEST_METHOD(Testmethod3)
        {
            double testArray[5] = { -1.2, 3.4, -5.6, 7.8, -9.0 };
            replace_and_sort(testArray, 5);

        }
    };
}