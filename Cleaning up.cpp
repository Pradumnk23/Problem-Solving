#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return gcd(B, A % B);
}

int main()
{
    fastio;
    test()
    {
        lli n,m,cnt=1;
        cin>>n>>m;
        lli temp,work[1001]={};
        for(lli i=0; i<m; i++)
            {cin>>temp;work[temp]=1; }
        vl chef;
        vl assnt;
        for(lli i=1; i<=n; i++)
        {
            if(work[i]==0 && cnt)
            {
                chef.pb(i);
                cnt=0;
            }
            else if(work[i]==0 && !cnt)
            {
                assnt.pb(i);
                cnt=1;
            }
        }
        for(auto &i:chef)
            cout<<i<<" ";
        cout<<endl;
        for(auto &i:assnt)
            cout<<i<<" ";
        cout<<endl;


    }
    return 0;
}
