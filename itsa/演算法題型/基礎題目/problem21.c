#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double num,max=-100000,min=10000000;
    for(int i=0;i<10;i++){
        scanf("%lf",&num);
        if(num>=max)max=num;
        if(num<min)min=num;
    }
    printf("maximum:%.2lf\n",max);
    printf("minimum:%.2lf",min);


	return 0;
}