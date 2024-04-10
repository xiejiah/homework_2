#include "pch.h"
#include "CppUnitTest.h"
#include"../homework_1/标头.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int cnt = 5;
			int nums[] = { 0, 1, 2, 3, 4, 5 };
			int sum = 15;
			Assert::AreEqual(sum, MaxSumOfSub4(cnt,nums));
		}
		TEST_METHOD(TestMethod2)
		{
			int cnt = 5;
			int nums[] = {0, -1, -2, -3, -4, -5 };
			int sum = 0;
			Assert::AreEqual(sum, MaxSumOfSub4(cnt, nums));
		}
		TEST_METHOD(TestMethod3)
		{
			int cnt = 8;
			int nums[] = {0, -2, -3, 4, -1, -2, 1, 5, -3 };
			int sum = 7;
			Assert::AreEqual(sum, MaxSumOfSub4(cnt, nums));
		}
		TEST_METHOD(TestMethod4)
		{
			int cnt = 5;
			int nums[5] = { -1, 0, 0, 0, 0 };
			int sum = 0;
			Assert::AreEqual(sum, MaxSumOfSub4(cnt, nums));
		}
	};
}