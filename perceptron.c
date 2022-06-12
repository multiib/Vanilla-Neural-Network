#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Function: rand_weight
 * ----------------------
 * to initialize weights and bias with random float between -1 and 1
 */

double rand_weight(void){

    double out;
    
    out = (2.0*(double)rand()/(double)RAND_MAX)-1.0;
    return out;
}

double perceptron;



float w1, w2, bias;



int main(){

srand(time(NULL));

printf("%lf\n",rand_weight());
printf("%lf\n",rand_weight());


    return 0;
}