#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	double c;
    cin>>c;
        
    double f = c*1.8+32;
    cout<<fixed<<setprecision(1);
	cout<<f<<endl;
    
	return 0;
}
