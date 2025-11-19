
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int w,p,k;
    cin>>w>>p>>k;
    int st=0;
    if(w<=k)
    {
        st+=(2*w);
        st=st+(k-w);
    }
    else if(w>k)
    {
        st+=(k*2);
    }
    cout<<st<<endl;
}
}
