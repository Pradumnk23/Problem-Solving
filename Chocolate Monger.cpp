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

int gcd(int a, int b)
{
    if (b== 0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    fastio;
    test()
    {
        lli n,x;
        cin>>n>>x;
        lli a[n];
        sl s;
        fn {cin>>a[i];s.insert(a[i]);}
        lli ss=s.size();
        if(n-x<=ss)
            cout<<n-x<<endl;
        else
            cout<<ss<<endl;

    }
    return 0;
}
