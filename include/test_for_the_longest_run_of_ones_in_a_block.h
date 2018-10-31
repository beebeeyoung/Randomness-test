#ifndef		TEST_FOR_THE_LONGEST_RUN_OF_ONES_IN_A_BLOCK_H
#define		TEST_FOR_THE_LONGEST_RUN_OF_ONES_IN_A_BLOCK_H

#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    //  ��ʵ���� M=10000 ʱ�����
    double test_for_the_longest_run_of_ones_in_a_block(const vector<bool> &bits, unsigned int m);

    class TestForTheLongestRunOfOnesInABolock: public TestMethod{
    public:
        unsigned int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        TestForTheLongestRunOfOnesInABolock(unsigned int _m);
        ~TestForTheLongestRunOfOnesInABolock();
    };
}

#endif
