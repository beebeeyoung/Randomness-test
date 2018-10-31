#ifndef		MONOBIT_FREQUENCY_TEST_H
#define		MONOBIT_FREQUENCY_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    double monobit_frequency_test(const std::vector<bool> &bits);

    class MonobitFrequencyTest: public TestMethod{
    public:
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        MonobitFrequencyTest();
        ~MonobitFrequencyTest();
    };
}

#endif
