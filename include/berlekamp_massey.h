#ifndef		BERLEKAMP_MASSEY_H
#define		BERLEKAMP_MASSEY_H


#include <algorithm>
#include <string.h>
//#include <stdlib.h>
using namespace std;
namespace algo{

    bool* newBoolArray(unsigned int n);

    void shlBoolArray(bool* a, unsigned int n, unsigned int c);

    void addBoolArray(bool* a, const bool* b, unsigned int n);

    void copyBoolArray(bool* a, const bool* b, unsigned int n);

    bool computeConvolution(const bool* a, const bool* b, unsigned int n);

    // there's something wrong with this procedure
    int berlekamp_massey(const bool* a, unsigned int n);

    int b2i(bool b);

    int linear_complexity(const bool* a, unsigned int M);

}

#endif
