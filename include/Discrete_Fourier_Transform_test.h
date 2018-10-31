#ifndef		DISCRETE_FOURIER_TRANSFORM_TEST_H
#define		DISCRETE_FOURIER_TRANSFORM_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "../include/dfft.h"
#include "test.h"
using namespace std;


namespace test{

    double Discrete_Fourier_Transform_test(const std::vector<bool> &bits);

    class DiscreteFourierTransformTest: public TestMethod{
    public:
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        DiscreteFourierTransformTest();
        ~DiscreteFourierTransformTest();
    };
}

#endif
