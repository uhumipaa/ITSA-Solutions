#include <stdio.h>
#include <stdlib.h>
void A(int num){
    int number[7];
    printf("0");
    for(int i=0;i<7;i++){
        if(num%2==1)number[i]=1;
        if(num%2==0)number[i]=0;
        num/=2;
    }
    for(int i=6;i>=0;i--){
        printf("%d",number[i]);
    }
}
void B(int num){
    num=(-num)-1;
    int number[7];
    printf("1");
    for(int i=0;i<7;i++){
        if(num%2==1)number[i]=1;
        if(num%2==0)number[i]=0;
        num/=2;
    }
    for(int i=6;i>=0;i--){
        if(number[i]==1)printf("0");
        if(number[i]==0)printf("1");
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    if(n<0)B(n);
    if(n>=0)A(n);

	return 0;
}