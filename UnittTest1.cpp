#include "pch.h"
#include "CppUnitTest.h"
#include "../Labka5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnittTest1
{
	TEST_CLASS(UnittTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			double x = 2;
			double r = 1;

			z = s(x);
			Assert::AreEqual(z, 0);

		}
	};
}
