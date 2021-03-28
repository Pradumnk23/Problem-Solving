#include <bits/stdc++.h>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
#define lli long long int
using namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli h[n];
        for(lli i=0; i<n; i++)
            cin>>h[i];
        for(lli i=0; i<=n; i++)
        {
            for(lli j=i+1; j<n; j++)
            {
                if(i==j)
                    continue;
                if(h[i]==h[j])
                {
                    h[i]++;
                    h[j]++;
                }
                if(h[i]<h[j])
                    break;
            }
        }
        for(lli i=0; i<n; i++)
            cout<<h[i]<<" ";
        cout<<endl;
    }
	return 0;
}
