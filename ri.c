#include <stdio.h>

int test (int a, int b){
    return a + b;
}

int test1(int a, int b){
    return a - b;
}

int main(){
int b =8;
int v = 0;

    int result = 0;
    result = test(b, v);
printf("The result is: %d\n", result);

    return 0;
}