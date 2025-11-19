
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a;
	    cin>>a;
	   string s;
	   cin>>s;
	   int freq=0;
	   freq=count(s.begin(),s.end(),'0');
	  while (freq != 0) {
            bool changed = false;

            for (int j = 0; j + 1 < a; j++) {
                if (s[j] == '1' && s[j + 1] == '0') {
                    s[j + 1] = '1';
                    changed = true;
                }
            }

            if (!changed) break;
            freq = count(s.begin(), s.end(), '0');
        }

	   freq =count(s.begin(),s.end(),'0');
	   cout<<freq<<endl;
	}

}
