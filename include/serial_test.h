#ifndef		SERIAL_TEST_H
#define		SERIAL_TEST_H


#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "../include/util.h"
#include "test.h"
using namespace std;



namespace test{

    //double serial_test_P2;
    double serial_test(vector<bool> &bits, unsigned int m);

    double serial_test2(const vector<bool> &bits);


    class SerialTest: public TestMethod{
    public:
        int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        SerialTest(int _m);
        ~SerialTest();
    };

    class SerialTest2: public TestMethod{
    public:
        int m;

        void run(std::vector<bool> &bits);

        const char* testName(int lang = 0);

        SerialTest2(int _m);
        ~SerialTest2();
    };
}

#endif
