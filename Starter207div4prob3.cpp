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
        int a,b,c,d;
        cin>>a>>b>>c;
        for(int j=0;j<a;j++)
        {
            int e,f,g;
            cin>>e>>f;
            g=abs(b-e)+abs(c-f);
            if(j==0)
            {
                d=g;
                g=0;
            }
            else
            {
                d= min(d,g);
            }
        }
        cout<<d<<endl;
    }

}
