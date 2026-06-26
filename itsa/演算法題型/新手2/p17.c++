#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	double a,b;
    cin>>a>>b;
    double value = b*a;
    if(a>60){
        a-=60;
        value += (double)a*(double)b*0.33;
    }
    if(a>60){
        a-=60;
        value += (double)a*(double)b*0.33;
    }
    cout<<fixed<<setprecision(1);
	cout<<value;
	
	return 0;
}
