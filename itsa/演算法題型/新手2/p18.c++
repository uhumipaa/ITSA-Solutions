#include <iostream>
using namespace std;

int main(void)
{
	int value;
    cin>>value;
    cout<<value/86400<<" days"<<endl;
    value%=86400;
    cout<<value/3600<<" hours"<<endl;
    value%=3600;
    cout<<value/60<<" minutes"<<endl;
    value%=60;
    cout<<value<<" seconds"<<endl;
	
	
	return 0;
}
