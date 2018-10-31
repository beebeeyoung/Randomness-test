#ifndef		BINARY_MATRIX_RANK_TEST_CPP
#define		BINARY_MATRIX_RANK_TEST_CPP
#include "../include/binary_matrix_rank_test.h"
using namespace std;

namespace test{

    // ��ʵ�� M=Q=32 �����
    double binary_matrix_rank_test(const vector<bool> &bits, unsigned int M, unsigned int Q){
        if (bits.size()==0 || M!=32 || Q!=32){
            cerr<<"Illegal parameter!"<<endl;
            throw;
        }

        int n=bits.size();
        int N=n/(M*Q);
        int n_disc=n%(M*Q);
        int Fm=0, Fm1=0, Fr=0;
        int** matrix;
        double V, P;
        matrix = new int* [M];
        for (int i=0; i<M; i++){
            matrix[i] = new int [Q];
        }

        int r;
        vector<bool>::const_iterator it=bits.begin();
        for (int i=0; i<N; i++){
            for (int j=0; j<M; j++)
                for (int k=0; k<Q; k++){
                    matrix[j][k]=*it;
                    it++;
                }
            r=algo::rank(matrix, M, Q);
            if (r==min(M,Q)) Fm++;
            else if(r==min(M,Q)-1) Fm1++;
            else Fr++;
        }

        V=(Fm-0.2888*N)*(Fm-0.2888*N)/(0.2888*N)+
          (Fm1-0.5776*N)*(Fm1-0.5776*N)/(0.5776*N)+
          (Fr-0.1336*N)*(Fr-0.1336*N)/(0.1336*N);
        P=igamc(1, V/2.0);

        cout<<"Binary matrix rank test:"<<endl;
        cout<<"    n   = "<<n<<endl;
        cout<<"   M*Q  = "<<M<<'*'<<Q<<endl;
        cout<<"    N   = "<<N<<endl;
        cout<<"    V   = "<<fixed<<setprecision(6)<<V<<endl;
        cout<<"    P   = "<<fixed<<setprecision(4)<<P*100<<"%"<<endl;
        cout<<"  "<<n_disc<<" bits are discarded."<<endl;

        for (int i=0; i<M; i++){
            delete[] matrix[i];
        }
        delete[] matrix;

        return P;
    }

    
    void BinaryMatrixRankTest::run(std::vector<bool> &bits){
        P = binary_matrix_rank_test(bits, M, Q);
    }

    const char* BinaryMatrixRankTest::testName(int lang){
        char* names[1] = {"Binary matrix rank test"};
        return names[lang];
    }

    BinaryMatrixRankTest::BinaryMatrixRankTest(unsigned int _M, unsigned int _Q) {M=_M; Q=_Q;}
    BinaryMatrixRankTest::~BinaryMatrixRankTest() {}

}

#endif
