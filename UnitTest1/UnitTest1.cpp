#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\2.5 oop\2.5 oop\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Number a;
			a.setNumber(4);
			Assert::AreEqual(4.0, a.getNumber());
		}
	};
}
