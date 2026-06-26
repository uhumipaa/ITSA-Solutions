#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m>31){
            cout<<"Value of more than 31"<<endl;
        }else{
            cout<<fixed<<setprecision(0)<<pow(2,m)<<endl;
        }
        
    }
	
	
	return 0;
}
