#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char answer[4],num[4],ya;
    scanf("%c%c%c%c",&answer[0],&answer[1],&answer[2],&answer[3]);
    scanf("%c",&ya);
    scanf("%c%c%c%c",&num[0],&num[1],&num[2],&num[3]);
    scanf("%c",&ya);
    while(!(num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3]&&num[0]=='0')){
        int A=0,B=0;
        for(int i=0;i<4;i++){
            for(int k=0;k<4;k++){
                if(num[k]==answer[i]){
                    if(k==i)A++;
                    if(k!=i)B++;
                }
            }
        }
        printf("%dA%dB\n",A,B);
        scanf("%c%c%c%c",&num[0],&num[1],&num[2],&num[3]);
        scanf("%c",&ya);
    }



	return 0;
}