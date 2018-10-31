#ifndef		CUMULATIVE_TEST_H
#define		CUMULATIVE_TEST_H

#include <vector>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;


namespace test{

    double cumulative_test(const std::vector<bool> &bits);

    class CumulativeTest: public TestMethod{
    public:
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        CumulativeTest();
        ~CumulativeTest();
    };

}

#endif
