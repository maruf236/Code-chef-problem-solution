
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int a;
	    cin>>a;
	    vector<int>v(a);
	    int t=0;
	    for(int i=0;i<a;i++)
	    {
	        cin>>v[i];
	    }
     if(a==1 || a==2)
        {
            cout<<0<<endl;
            continue;
            }
	    for(int i=0;i<a;i++)
	    {

	           int it=max_element(v.begin(),v.end())-v.begin();
	           int k=v.size()-1;
	            t =t+min(it,k-it);
	           v.erase(v.begin()+it);


	    }
	    cout<<t<<endl;
	}
}
