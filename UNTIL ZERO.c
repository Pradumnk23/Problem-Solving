/*#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    long int a[1000], b[1000];

    cin >> t;

    for (int i = 0; i < t; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < t; i++)
    {
        while ((b[i] > 0) && (a[i] > 0))
        {
            if (b[i] > a[i])
                b[i] = b[i] - a[i];
            else
                a[i] = a[i] - b[i];
            count++;
        }
        cout << count << endl;
        count = 0;
    }
}*/

#include<bits/stdc++.h>
using namespace std;
//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

int gcd(int a, int b)
{
    if(a==0) return 0;
    else return gcd(b%a, a) + b/a;
}
int main(){
    long long int a,n,b,i,ck=0,aa=0;
    sc1(n);
    while(n--){
        sc2(a,b);
       cout<<gcd(a,b)<<endl;
    }
}
