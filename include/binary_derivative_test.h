#ifndef		BINARY_DERIVATIVE_TEST_H
#define		BINARY_DERIVATIVE_TEST_H

#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;

namespace test{
    double binary_derivative_test(const std::vector<bool> &bits, unsigned int k);

    class BinaryDerivativeTest: public TestMethod{
    public:
        unsigned int k;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        BinaryDerivativeTest(unsigned int _k);
        ~BinaryDerivativeTest();
    };
}

#endif
