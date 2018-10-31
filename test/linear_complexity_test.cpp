#ifndef		LINEAR_COMPLEXITY_TEST_CPP
#define		LINEAR_COMPLEXITY_TEST_CPP

#include "../include/linear_complexity_test.h"
using namespace std;



namespace test{

    //  ��ʵ���� m=500 ʱ�����
    double linear_complexity_test(const vector<bool> &bits, unsigned int m){
        if (bits.size()==0 || m!=500 || bits.size()<m){
            cerr<<"Illegal parameter!"<<endl;
            throw;
        }

        int n = bits.size();
        int N = n/m;
        int n_disc = n%m;

        double v[7]={0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        const double pi[7]={0.010417, 0.03125, 0.12500, 0.5000, 0.25000, 0.06250, 0.020833};
        double V=0.0;
        double P;

        bool* arr;
        int complexity;
        double T, miu;
        arr = new bool[m];
        miu=m/2.0+(9.0+(m%2==0?1.0:-1.0))/36.0-(m/3.0+2.0/9.0)/pow(2.0, m);
        vector<bool>::const_iterator it=bits.begin();
        for (int i=0; i<N; i++){
            for (int j=0; j<m; j++){
                arr[j]=*it;
                it++;
            }
            // call linear_complexity instead of berlekamp_massey
            complexity = algo::linear_complexity(arr, m);
            T=(m%2==0?1.0:-1.0)*(complexity-miu)+2.0/9.0;
            if (T<=-2.5) v[0]++;
            else if(T<=-1.5) v[1]++;
            else if(T<=-0.5) v[2]++;
            else if(T<=0.5) v[3]++;
            else if(T<=1.5) v[4]++;
            else if(T<=2.5) v[5]++;
            else v[6]++;
        }

        for (int i=0; i<7; i++){
            // printf("v[%d]=%f\n", i, v[i]);
            V+=pow(v[i]-N*pi[i], 2.0)/(N*pi[i]);
        }
        P=igamc(3.0, V/2.0);

        cout<<"Linear complexity test:"<<endl;
        cout<<"    n   = "<<n<<endl;
        cout<<"    m   = "<<m<<endl;
        cout<<"    N   = "<<N<<endl;
        cout<<"    V   = "<<fixed<<setprecision(6)<<V<<endl;
        cout<<"    P   = "<<fixed<<setprecision(4)<<P*100<<"%"<<endl;
        cout<<"  "<<n_disc<<" bits are discarded."<<endl;

        delete[] arr;
        return P;
    }

    
    void LinearComplexityTest::run(std::vector<bool> &bits){
        P = linear_complexity_test(bits, m);
    }

    const char* LinearComplexityTest::testName(int lang){
        char* names[1] = {"Linear complexity test"};
        return names[lang];
    }

    LinearComplexityTest::LinearComplexityTest(unsigned int _m) {m=_m;}
    LinearComplexityTest::~LinearComplexityTest() {}

}

#endif
