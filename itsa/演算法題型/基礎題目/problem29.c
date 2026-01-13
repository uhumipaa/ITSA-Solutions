#include <stdio.h>

#include <stdlib.h>



int main(int argc, char *argv[]) {

    int abc[]={'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};
    char c;
    int num,x,x1,x2,number=100000000;
    scanf("%c%d",&c,&num);
    for(int i=0;i<26;i++){
        if(c==abc[i]){
            x=i+10;
            break;
        }
    }
    x1=x/10;
    x2=x%10;
    int p=x1+9*x2;
    for(int i=8;i>0;i--){
        int n=num/number;
        p+=n*i;
        num=num%number;
        number/=10;
    }    
    p+=num;
    if(p%10==0){
        printf("CORRECT!!!");
    }else{
        printf("WRONG!!!");
    }
    return 0;

}