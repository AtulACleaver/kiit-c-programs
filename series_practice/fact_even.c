#include <stdio.h>

int main(){
    int n = 5;
    int count = 0;

    for(int i = 1; count < n; i+=2){
        printf("%d ", i);
        count++;
    }


    return 0;
}