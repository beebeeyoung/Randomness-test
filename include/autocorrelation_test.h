#ifndef		AUTOCORRELATION_TEST_H
#define		AUTOCORRELATION_TEST_H
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;


namespace test{
    double autocorrelation_test(const std::vector<bool> &bits, unsigned int d);

    class AutocorrelationTest: public TestMethod{
    public:
        unsigned int d;
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        AutocorrelationTest(unsigned int _d);
        ~AutocorrelationTest();
    };

}

#endif
