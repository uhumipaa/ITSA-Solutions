#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    n--;
    while(1){
        int i =2,valid = 0;
        while(i<n){
            if(n%i==0){
                valid = 1;
                break;
            }
            i++;
        }
        if(!valid)break;
        n--;
    }
	cout<<n;
	
	return 0;
}
