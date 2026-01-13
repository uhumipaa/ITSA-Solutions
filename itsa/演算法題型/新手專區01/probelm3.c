#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);
    printf("%d,%d,%d,%d",num%10,(num%100)/10,(num%1000)/100,num/1000);



	return 0;
}