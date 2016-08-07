#include<stdio.h>
#include<myHeader.h>

int main() {
    int a = getInteger();
    int result = 1;
    for(int i=1; i <= a; i++){
    	result = result * i;
    }
    printf("\nThe factorial of [ %d ] is : %d\n\n", a, result);
    return 0;
}
