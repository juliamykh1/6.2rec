#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2rec/6.2rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 2;
			int a[k] = { 1, 2 };
			t = Max(a, k, 1, a[0]);
			Assert::AreEqual(2, t);
		}
	};
}
