#ifndef		RUNS_DISTRIBUTION_TEST_H
#define		RUNS_DISTRIBUTION_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    double runs_distribution_test(vector<bool> &bits);

    class RunsDistributionTest: public TestMethod{
    public:
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        RunsDistributionTest();
        ~RunsDistributionTest();
    };
}

#endif
