#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int main() {
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int k,end=0;
    cin>>k;
    int a=0;
    end=k;
    while(a<k)
    {
        a++;
        if(a%2==0)
        {
           end=end+(k-a); 
        }
        else
        {
            end=end-(k-a);
        }
    }
    cout<<end<<endl;
}
}
