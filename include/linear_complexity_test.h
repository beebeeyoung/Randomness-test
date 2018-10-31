#ifndef		LINEAR_COMPLEXITY_TEST_H
#define		LINEAR_COMPLEXITY_TEST_H

#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "../include/berlekamp_massey.h"
#include "test.h"
using namespace std;



namespace test{

    //  ��ʵ���� m=500 ʱ�����
    double linear_complexity_test(const vector<bool> &bits, unsigned int m);

    class LinearComplexityTest: public TestMethod{
    public:
        unsigned int m;
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        LinearComplexityTest(unsigned int _m);
        ~LinearComplexityTest();
    };
}

#endif
