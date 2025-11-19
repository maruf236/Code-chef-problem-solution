
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    bool zero=false;
	    int m=0;
	    for(int j=0;j<l;j++)
	    {
	        if(s[j]=='0')
	        {
	            zero=true;
	        }
	        else if(s[j]=='1' && zero==true)
	        {
	            m++;
	        }
	    }
	    cout<<m<<endl;
	}

}
