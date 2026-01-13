#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num,count=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0)count+=i;
    }
    printf("%d",count);


	return 0;
}