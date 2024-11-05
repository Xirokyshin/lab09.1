#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.2.2.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(CalculateWTests)
    {
    public:

        TEST_METHOD(TestCalculateWFormula1)
        {
            // Тест для формули 1
            Assert::AreEqual(2.0, calculateWFormula1(5, 3, 2)); 
            Assert::AreEqual(-1.0, calculateWFormula1(1, 2, 3)); 
        }

        TEST_METHOD(TestCalculateWFormula2)
        {
            // Тест для формули 2
            Assert::AreEqual(2.0, calculateWFormula2(5, 3, 2)); 
            Assert::AreEqual(-1.0, calculateWFormula2(1, 2, 3)); 
        }

        TEST_METHOD(TestCalculateWUseFormula1)
        {
            
#ifdef USE_FORMULA1
            Assert::AreEqual(2.0, calculateW(5, 3, 2)); 
#else
            Assert::AreEqual(2.0, calculateW(5, 3, 2)); 
#endif
        }

        TEST_METHOD(TestCalculateWUseFormula2)
        {
            
#ifdef USE_FORMULA1
            Assert::AreEqual(-1.0, calculateW(1, 2, 3)); 
#else
            Assert::AreEqual(-1.0, calculateW(1, 2, 3)); 
#endif
        }
    };
}
