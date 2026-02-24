#include "difference_of_squares.h"

unsigned int square_of_sum (unsigned int number){

    unsigned int count = 0,i;
    for(i = 1; i<=number; i++){

        count+=i;
    }
    return count*count;
}

unsigned int sum_of_squares (unsigned int number){

    unsigned int count = 0, i;
    for(i=1; i<=number; i++){
        count += i*i;
    }
    return count;
    
}

unsigned int difference_of_squares (unsigned int number){

    return square_of_sum(number)-sum_of_squares(number);
}