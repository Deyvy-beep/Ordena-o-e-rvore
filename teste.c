#include <time.h>
#include <stdio.h>

#define N 25

void main(){

    int i, j, igual;
    int num[N];

    for(i = 0; i < N; ){

        int Nrandom = rand() % 50 + 1;
        igual = 0;

        for(j = 0; j < i; j++){
            if(num[j] == Nrandom){
                igual = 1;
                break;
            }
        }

        if(igual == 0){
            num[i] = Nrandom;
            i++;
        }
    }

    for(i = 0; i < N; i++){

        printf("%d ", num[i]);
    }
}