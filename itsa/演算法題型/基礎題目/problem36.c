#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int year;
    scanf("%d",&year);
    if(year%400==0){
        printf("Bissextile Year");
    }else if(year%100==0){
        printf("Common Year");
    }else if(year%4==0){
        printf("Bissextile Year");
    }else{
        printf("Common Year");
    }



	return 0;
}