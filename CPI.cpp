//CPI calculator

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	char grade = 'P';
	float cpi = 0;
	int credit;
	int score = 0;
	int total_credit = 0;
	while(grade!='Z')
    {
        cin>>grade;
        cin>>credit;
        total_credit+=credit;
        if(grade=='A')
            score+=10*credit;
        if(grade=='B')
            score+=8*credit;
        if(grade=='C')
            score+=6*credit;
        if(grade=='D')
            score+=4*credit;
    }
    cpi = score*1.0/total_credit;
    cout<<cpi<<endl;
	return 0;
}
