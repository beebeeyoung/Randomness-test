#ifndef		BINARY_DERIVATIVE_TEST_CPP
#define		BINARY_DERIVATIVE_TEST_CPP

#include "../include/binary_derivative_test.h"
using namespace std;

namespace test{
    double binary_derivative_test(const std::vector<bool> &bits, unsigned int k){
        if(bits.size()<0 || bits.size()<k){
            cerr<<"Illegal parameter!"<<endl;
            throw;
        }

        int n=bits.size();
        int S=0;
        double V;
        double P;
        vector<bool> _bits(bits);

        for (int i=0; i<k; i++){
            for (int j=0; j<n-i-1; j++){
                _bits[j]=_bits[j] ^ _bits[j+1];
            }
        }

        for (int i=0; i<n-k; i++)
            if(_bits[i]) S++; else S--;
        V = fabs(S)/sqrt(n-k);
        P = erfc(V/sqrt(2));

        cout<<"Binary derivative test:"<<endl;
        cout<<"    n   = "<<n<<endl;
        cout<<"    k   = "<<k<<endl;
        cout<<"    S   = "<<S<<endl;
        cout<<"    V   = "<<fixed<<setprecision(6)<<V<<endl;
        cout<<"    P   = "<<fixed<<setprecision(4)<<P*100<<"%"<<endl;
        return P;
    }


    void BinaryDerivativeTest::run(std::vector<bool> &bits){
        P = binary_derivative_test(bits, k);
    }

    const char* BinaryDerivativeTest::testName(int lang){
        char* names[1] = {"Binary derivative test"};
        return names[lang];
    }

    BinaryDerivativeTest::BinaryDerivativeTest(unsigned int _k) {k=_k;}
    BinaryDerivativeTest::~BinaryDerivativeTest() {}
}

#endif
