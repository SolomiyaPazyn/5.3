#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = z(0);
			Assert::AreEqual(1., t);
		}
	};
}
