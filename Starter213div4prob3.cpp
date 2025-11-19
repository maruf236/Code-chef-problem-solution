
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--)
	{
	  int m;
	  cin>>m;
	  int arr[m];
	  for(int i=0;i<m;i++)  cin>>arr[i];
	  sort(arr,arr+m);
	  bool not4=true;
	  int total=0;
	  int c1=0,c2=0,c3=0;
	  for(int i=0;i<m;i++)
	  {
	      if(arr[i]==1) c1++;
	      else if(arr[i]==2) c2++;
	      else if(arr[i]==3) c3++;
	  }
	  total+=min(c1,c3);
	  if(c2>1){
	  total+=(c2-1);
	  }
	  cout<<total<<endl;

	}


}
