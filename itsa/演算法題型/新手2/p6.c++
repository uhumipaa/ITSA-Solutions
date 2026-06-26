#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int value = (a+b)*(a+b);
        cout<<value<<endl;
    }
	
	
	return 0;
}
