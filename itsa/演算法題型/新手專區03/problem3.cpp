#include <iostream>
using namespace std;

int main(void)
{
	int n,check=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"NO";
            check=1;
            break;
        }
    }
    if(check==0)cout<<"YES";
	
	return 0;
}
