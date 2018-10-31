#ifndef		APPROXIMATE_ENTROPY_TEST_h
#define		APPROXIMATE_ENTROPY_TEST_h
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;
namespace test{

    double approximate_entropy_test(vector<bool> &bits, unsigned int m);

    class ApproximateEntropyTest: public TestMethod{
    public:
        unsigned int m;
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        ApproximateEntropyTest(unsigned int _m);
        ~ApproximateEntropyTest();
    };
}

#endif
