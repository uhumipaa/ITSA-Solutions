#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int month;
    scanf("%d",&month);
    month=month%12/3;
    switch (month){
        case 0 :
            printf("Winter");
            break;
        case 1 :
            printf("Spring");
            break;
        case 2 :
            printf("Summer");
            break;
        case 3 :
            printf("Autumn");
            break;
    }


	return 0;
}