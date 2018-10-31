#ifndef		RANK_H
#define		RANK_H

#include <algorithm>
using namespace std;
namespace algo{

    int rank(int** matrix, int M, int Q);
    void perform_elementary_row_operations(int flag, int i, int M, int Q, int** A);
    int find_unit_element_and_swap(int flag, int i, int M, int Q, int** A);
    int swap_rows(int i, int index, int Q, int** A);
    int determine_rank(int m, int M, int Q, int** A);
    /*
    #define	MATRIX_FORWARD_ELIMINATION	0
    #define	MATRIX_BACKWARD_ELIMINATION	1
    */

}

#endif
