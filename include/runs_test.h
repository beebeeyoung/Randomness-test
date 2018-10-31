#ifndef		RUNS_TEST_H
#define		RUNS_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    double runs_test(const vector<bool> &bits);

    class RunsTest: public TestMethod{
    public:
        int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        RunsTest();
        ~RunsTest();
    };

}

#endif
