#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n<10){
        n*=100;
    }else if(n<30){
        n*=90;
    }else if(n<100){
        n*=80;
    }else{
        n*=70;
    }
	cout<<n;
	
	return 0;
}
