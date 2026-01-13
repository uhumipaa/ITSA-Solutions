#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);
    for(int i=0;i<num/10000;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<num%10000/1000;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<num%1000/100;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<num%100/10;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<num%10;i++){
        printf("*");
    }



	return 0;
}