#ifndef     TESTSUIT_H
#define     TESTSUIT_H

#include <vector>
#include <iostream>
#include "approximate_entropy_test.h"
#include "autocorrelation_test.h"
#include "binary_derivative_test.h"
#include "binary_matrix_rank_test.h"
#include "cumulative_test.h"
#include "Discrete_Fourier_Transform_test.h"
#include "frequency_test_within_a_block.h"
#include "linear_complexity_test.h"
#include "Maurers_universal_test.h"
#include "monobit_frequency_test.h"
#include "poker_test.h"
#include "runs_distribution_test.h"
#include "runs_test.h"
#include "serial_test.h"
#include "test_for_the_longest_run_of_ones_in_a_block.h"

using namespace std;



namespace testSuit{
    //vector<test::TestMethod*> tests;

    void initDefaultTests();

    void runTest(vector<bool>& bits);
}

#endif