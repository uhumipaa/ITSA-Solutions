#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double num;
        cin>>num;
        if(num<18.5)cout<<"體重過輕"<<endl;
        else if (num<24)cout<<"正常"<<endl;
        else if (num<28)cout<<"體重過重"<<endl;
        else cout<<"肥胖"<<endl;
    }
	
	
	return 0;
}
