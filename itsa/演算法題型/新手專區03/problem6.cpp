#include <iostream>
using namespace std;

int main(void)
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=70&&x>=50){
            cout<<x<<endl;
        }else{
            cout<<"100"<<endl;
        }
    }
	
	
	return 0;
}
