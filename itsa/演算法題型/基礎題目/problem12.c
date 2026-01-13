#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int n){
    if(n==0||n==1)return n+1;
    return f(n-1)+f(floor(n/2));
}
int main(int argc, char *argv[]) {
    int n=0;
    scanf("%d",&n);
    printf("%d",f(n));



	return 0;
}