#ifndef		RUNS_DISTRIBUTION_TEST_CPP
#define		RUNS_DISTRIBUTION_TEST_CPP


#include "../include/runs_distribution_test.h"
using namespace std;



namespace test{

    double runs_distribution_test(vector<bool> &bits){
        if (bits.size()<100){
            cerr<<"Illegal parameter!"<<endl;
            throw;
        }
        int n = bits.size();
        int k=0;
        double e[50], b[50]={}, g[50]={};
        double V=0;
        double P;
        bool cur=bits[0];
        int cnt=0;

        do {
            k++;
            e[k]=double(n-k+3)/double(1<<(k+2));
        } while (e[k] >= 5.0);
        k--;

        bits.push_back(!(bits[n-1]));
        for (int i=0; i<=n; i++){
            if (bits[i]==cur){
                cnt++;
            } else {
                if (cnt<=k){
                    if (cur)
                        b[cnt]++;
                    else
                        g[cnt]++;
                }
                cur=bits[i];
                cnt=1;
            }
        }
        bits.pop_back();

        for (int i=1; i<=k; i++){
            //cout<<"b,g,e["<<i<<"]="<<b[i]<<" "<<g[i]<<" "<<e[i]<<endl;
            V+=(b[i]-e[i])*(b[i]-e[i])/e[i];
            V+=(g[i]-e[i])*(g[i]-e[i])/e[i];
        }
        P=igamc(k-1, V/2.0);

        cout<<"Runs distribution test:"<<endl;
        cout<<"    n   = "<<n<<endl;
        cout<<"    k   = "<<k<<endl;
        cout<<"    V   = "<<fixed<<setprecision(6)<<V<<endl;
        cout<<"    P   = "<<fixed<<setprecision(4)<<P*100<<"%"<<endl;

        return P;
    }


    void RunsDistributionTest::run(std::vector<bool> &bits){
        P = runs_distribution_test(bits);
    }

    const char* RunsDistributionTest::testName(int lang){
        char* names[1] = {"Runs distribution test"};
        return names[lang];
    }

    RunsDistributionTest::RunsDistributionTest() {}
    RunsDistributionTest::~RunsDistributionTest() {}

}

#endif
