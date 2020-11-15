#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/Lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab61
{
	TEST_CLASS(UnitTestLab61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4]{ 0,0,0,3 };
			int f = Icount(a, 4);
			Assert::AreEqual(f, 1);
		}
	};
}
