#ifndef		MAURERS_UNIVERSAL_TEST_H
#define		MAURERS_UNIVERSAL_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    double Mut_factor_C(int L, int K);

    double Maurers_universal_test(const vector<bool> &bits, unsigned int L, unsigned int Q);

    class MaurersUniversalTest: public TestMethod{
    public:
        unsigned int L, Q;
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        MaurersUniversalTest(unsigned int _L, unsigned int _Q);
        ~MaurersUniversalTest();
    };
}

#endif
