#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int du;
    scanf("%d",&du);
    double sum,nonsum;
        sum=du*2.1;
        nonsum=du*2.1;
        du-=120;
        if(du>0){
            sum+=du*0.92;
            nonsum+=du*0.58;
            du-=210;
            if(du>0){
                sum+=du*1.37;
                nonsum+=du*0.93;
                du-=170;
                if(du>0){
                    sum+=du*0.58;
                    nonsum+=du*0.4;
                    du-=200;
                    if(du>0){
                        sum+=du*0.66;
                        nonsum+=du*0.49;
                    }
                }
            }
        }

    printf("Summer months:%.2lf\n",sum);
    printf("Non-Summer months:%.2lf",nonsum);

	return 0;
}