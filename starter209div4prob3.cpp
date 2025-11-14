#include <iostream>
#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    cin>>a>>b;
    int sodd=0,seve=0;
	    for(int i=a;i<=b;i++)
	    {
	        if(i%a==0)
	        {
	            if(i%2==0)
	            {
	             seve+=i;
	            }
	            else
	            {
	                sodd+=i;
	            }
	        }
	    }
	    if(seve>=sodd)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	       cout<<"NO"<<endl;
	    }
	}

}

