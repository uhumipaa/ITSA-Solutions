#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num,check=1;
    scanf("%d",&num);
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            check=0;
            break;
        }
    }
    if(check){
        printf("YES");
    }else{
        printf("NO");
    }

	return 0;
}