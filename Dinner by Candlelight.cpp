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
        lli a,y,x;
        cin>>a>>y>>x;
        if(a>=y)
            cout<<y*x<<endl;
        else
            cout<<1+a*x<<endl;
    }
	return 0;
}
