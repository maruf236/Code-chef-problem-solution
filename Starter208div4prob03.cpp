#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int main() {
int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x,k,mr=0;
	    cin>>n>>x>>k;
	    vector<int>arr(n);
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    sort(arr.rbegin(),arr.rend());
	    for(int j=0;j<k;j++)
	    {
	        arr[j]=0;
	        x+=100;
	    }
	    arr.push_back(x);
	    sort(arr.rbegin(),arr.rend());
	    for(int j=0;j<=n;j++)
	    {
	        if(arr[j]==x)
	        {
	            cout<<j+1<<endl;
	            break;
	        }
	    }
	    
	    
	}
	return 0;
}
