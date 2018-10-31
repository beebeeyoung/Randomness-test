#ifndef		BINARY_MATRIX_RANK_TEST_H
#define		BINARY_MATRIX_RANK_TEST_H

#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "../include/rank.h"
#include "test.h"
using namespace std;

namespace test{

    // ��ʵ�� M=Q=32 �����
    double binary_matrix_rank_test(const vector<bool> &bits, unsigned int M, unsigned int Q);

    class BinaryMatrixRankTest: public TestMethod{
    public:
        unsigned int M, Q;
        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        BinaryMatrixRankTest(unsigned int _M, unsigned int _Q);
        ~BinaryMatrixRankTest();
    };
}

#endif
