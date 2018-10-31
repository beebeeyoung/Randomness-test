#ifndef		POKER_TEST_H
#define		POKER_TEST_H

#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;




namespace test{

    double poker_test(const vector<bool> &bits, int m);

    class PokerTest: public TestMethod{
    public:
        int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        PokerTest(int _m);
        ~PokerTest();
    };

}

#endif
