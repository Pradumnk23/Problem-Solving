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
        lli x,r,m;
        cin>>x>>r>>m;
        r=r*60;
        m=m*60;
        if(x>=r)
        {
            if(m>=r)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(2*r-x<=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
