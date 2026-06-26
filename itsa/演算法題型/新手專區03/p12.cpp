#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int score;
        cin>>score;
        if(score>=90)cout<<"優等"<<endl;
        else if(score>=80&&score<90)cout<<"甲等"<<endl;
        else if(score>=70&&score<80)cout<<"乙等"<<endl;
        else if(score>=60&&score<70)cout<<"丙等"<<endl;
        else cout<<"不及格"<<endl;
    }
	
	
	return 0;
}
