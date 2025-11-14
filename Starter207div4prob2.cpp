#include <iostream>
#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    string s;
    cin>>s;
    int first_black=-1;
    int last_black=-1;
    int total=0;
    for(int j=0;s[j]!='\0';j++)\
    {
        if(s[j]=='1')
        {
            if(first_black==-1)
            {
                first_black=j;
            }

                last_black=j;

        }
    }
    if(first_black==-1)
    {
        cout<<total<<endl;
    }
    else{
    for(int j=first_black; j<=last_black;j++)
    {
        if(s[j]=='0')
        {
            total++;
        }

    }
    cout<<total<<endl;
}
}



}
