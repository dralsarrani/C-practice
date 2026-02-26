#include "hamming.h"

int compute(const char *lhs, const char *rhs){

    int i, count =0; 
    int h = strlen(lhs);
    
    if (strlen(lhs) != strlen(rhs)){
        return -1;
    }
    
    for(i = 0; i<h; i++){

        if (lhs[i] != rhs[i] ){
            count ++;
        }
        
    }
    return count;
}