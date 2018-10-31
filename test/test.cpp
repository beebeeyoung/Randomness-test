#ifndef		TEST_CPP
#define		TEST_CPP
#include "../include/test.h"
using namespace std;


namespace test{
    double ALPHA = 0.01;
        /*
        virtual void TestMethod::run(std::vector<bool> &bits) = 0;
        virtual const char* TestMethod::testName(int lang) = 0;
        */
        bool TestMethod::result(){
            return P > ALPHA;
        }

};


#endif
