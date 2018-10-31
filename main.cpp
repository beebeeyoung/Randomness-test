#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "include/util.h"

#include "include/rank.h"
#include "include/berlekamp_massey.h"
#include "include/dfft.h"

#include "include/test.h"
#include "include/monobit_frequency_test.h"
#include "include/frequency_test_within_a_block.h"
#include "include/poker_test.h"
#include "include/serial_test.h"
#include "include/runs_test.h"
#include "include/runs_distribution_test.h"
#include "include/test_for_the_longest_run_of_ones_in_a_block.h"
#include "include/binary_derivative_test.h"
#include "include/autocorrelation_test.h"
#include "include/binary_matrix_rank_test.h"
#include "include/cumulative_test.h"
#include "include/approximate_entropy_test.h"
#include "include/linear_complexity_test.h"
#include "include/Maurers_universal_test.h"
#include "include/Discrete_Fourier_Transform_test.h"

#include "include/testsuit.h"

default_random_engine generator(time(NULL));
uniform_int_distribution<int> distribution(0, 1);

vector<bool> v;
int main(int argc, char* argv[]){
    if (argc<=1){
        srand(time(NULL));
        for (int i=0;i<1000000;i++){
            v.push_back(distribution(generator));
        }


    } else {
        fstream f(argv[1]);
        char c;
        while (f>>c){
            if (c=='0') v.push_back(false);
            else if(c=='1') v.push_back(true);
            else {
                cout<< "Invalid character!"<<endl;
                return 0;
            }
        }
    }

    testSuit::initDefaultTests();
    testSuit::runTest(v);

    return 0;
}

