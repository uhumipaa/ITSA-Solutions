#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,a1,a2,a3,coin50,coin5,coin1;
    scanf("%d,%d,%d,%d",&n,&a1,&a2,&a3);
    n-=(a1*15+a2*20+a3*30);
    if(n>=0){
        coin50 = n/50;
        n=n%50;
        coin5 = n/5;
        coin1=n%5;
        printf("%d,%d,%d",coin1,coin5,coin50);
    }else{
        printf("0");
    }

	return 0;
}