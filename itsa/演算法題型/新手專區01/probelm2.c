#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);
    printf("%d\n%d\n%d\n%d",num/1000,(num%1000)/100,(num%100)/10,num%10);



	return 0;
}