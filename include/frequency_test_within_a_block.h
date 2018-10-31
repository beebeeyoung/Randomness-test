#ifndef		FREQUENCY_TEST_WITHIN_A_BLOCK_H
#define		FREQUENCY_TEST_WITHIN_A_BLOCK_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    double frequency_test_within_a_block(const vector<bool> &bits, int m);

    class FrequencyTestWithinABlock: public TestMethod{
    public:
        int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        FrequencyTestWithinABlock(int _m);
        ~FrequencyTestWithinABlock();
    };

}

#endif
