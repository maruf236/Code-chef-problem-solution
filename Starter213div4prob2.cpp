
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        vector<int>v;
        while(a--)
        {
            int arr[2];
            for(int i=0;i<2;i++)
            {
                cin>>arr[i];
            }
            int b=arr[0]/arr[1];
            v.push_back(b);
            //cout<<b<<endl;
        }
       int d= max_element(v.begin(),v.end())-v.begin();
        cout<<d+1<<endl;


        }
    }


