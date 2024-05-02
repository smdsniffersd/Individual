#include "pch.h"
#include "CppUnitTest.h"
#include "input.h"
#include "calc.h"
#include "output.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestFromTriplets
{
    TEST_CLASS(UnitTestFromTriplets)
    {
    public:

        TEST_METHOD(TestMethodGetInput)
        {
            unsigned int NumbersTroniks;
            int* Troniks;

            std::istringstream input_stream("3\n2\n4\n5\n");
            std::cin.rdbuf(input_stream.rdbuf());

            input::getInput(NumbersTroniks, Troniks);

            Assert::AreEqual(3u, NumbersTroniks);
            Assert::AreEqual(2, Troniks[0]);
            Assert::AreEqual(4, Troniks[1]);
            Assert::AreEqual(5, Troniks[2]);
        }

        TEST_METHOD(TestMethodOutputData)
        {
            std::ostringstream output_stream;
            std::streambuf* old_cout = std::cout.rdbuf(output_stream.rdbuf());
            int NumberTea = 5;

            output::output_data(NumberTea);

            Assert::AreEqual(std::string("Максимальное количество чайников, которые можно использовать: 5"), output_stream.str());

            std::cout.rdbuf(old_cout);
        }

        TEST_METHOD(TestMethodCalculateMaxTeapots)
        {
            int Troniks[] = { 2, 4, 5 };
            int result = calculate::calculateMaxTeapots(3, Troniks);
            Assert::AreEqual(9, result);
        }
        TEST_METHOD(TestMethodGetInputSingleTronik)
        {
            unsigned int NumbersTroniks;
            int* Troniks;

            std::istringstream input_stream("1\n3\n");
            std::cin.rdbuf(input_stream.rdbuf());

            input::getInput(NumbersTroniks, Troniks);

            Assert::AreEqual(1u, NumbersTroniks);
            Assert::AreEqual(3, Troniks[0]);
        }


    };
}
