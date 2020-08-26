//Rearrange characters

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t=1;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int a[26]={0};
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-97]++;
        }
        sort(a, a+26);
        /*for(int i=0;i<26;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/


        string str="";
        string temp="", temp1="";
        int check=1;
        for(int i=0;i<26;i++)
        {
            int j=0;
            if(a[i])
            {
                while(a[i]>0)
                {
                    if(str[j]!=i+97)
                    {
                        temp="";
                        temp1="";
                        temp.append(str,0, j);
                        temp1.append(str, j, str.length());
                        char c = i+97;
                        str = temp + c + temp1;
                        a[i]--;
                        j+=2;
                        //cout<<str<<endl;
                    }
                    if(j==str.length() && a[i]!=0)
                    {
                        char c = i+97;
                        str = str + c;
                        a[i]--;
                        j+=2;
                        //cout<<str<<endl;
                    }
                    if(j>str.length())
                    {
                        while(a[i]>0)
                        {
                            char c= i + 97;
                            str = c+str;
                            a[i]--;
                            //cout<<str<<endl;
                        }
                    }
                }
            }

        }
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]==str[i+1])
            {
                check=0;
                break;
            }
        }
        if(check==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
	}
	return 0;
}
