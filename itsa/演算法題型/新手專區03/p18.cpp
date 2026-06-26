#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int n,sum1=0,sum2=0,max=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int score;
        cin>>score;
        if(score>=900)sum1++;
        if(score<=700&&score>=600)sum2++;
        if(score>max)max = score;
        sum+=score;
    }
	cout<<max<<endl<<sum1<<endl<<sum2<<endl;
    cout<<fixed<<setprecision(1);
    cout<<(double)sum/(double)n;
	
	return 0;
}
