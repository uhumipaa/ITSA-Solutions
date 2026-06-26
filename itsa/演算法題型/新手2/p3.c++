#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	int a;
    cin>>a;
    for(int i=0;i<a;i++){
        double b;
        cin>>b;
        double area = b*b;
        area = round(area * 10.0) / 10.0;
        cout<<fixed<<setprecision(1);
	    cout<<area<<endl;
    }
	return 0;
}
