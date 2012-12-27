#include "stdafx.h"
#include "CppUnitTest.h"
#include "../fireblast.tdd/fireblast.tdd.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace fireblasttest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(DoubleTest)
		{
			Cfireblasttdd tdd;
			Assert::AreEqual(0.0, tdd.SquareRoot(0.0), 0.01, L"Basic test failed", LINE_INFO());
		}
	};
}