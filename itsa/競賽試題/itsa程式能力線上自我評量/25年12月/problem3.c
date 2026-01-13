#include <stdio.h>
#include <stdlib.h>
int A(int num){
    int count=0,number=2;
    while(num!=0){
        if(num%number==1)count++;
        num/=2;
    }
    return count;
}
int main(int argc, char *argv[]) {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        printf("%d %d\n",A(num),A(num/10000)+A(num%10000/1000)+A(num%1000/100)+A(num%100/10)+A(num%10));
    }



	return 0;
}