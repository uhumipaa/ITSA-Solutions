#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,sum=0;
        cin>>a>>b;
        if(a>b){
            for(int j=b;j<=a;j++){
                sum+=j;
            }
        }else{
            for(int j=a;j<=b;j++){
                sum+=j;
            }
        }
        cout<<sum<<endl;
    }
	
	
	return 0;
}
