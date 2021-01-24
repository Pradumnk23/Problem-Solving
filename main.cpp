#include <iostream>

using namespace std;

int main()
{
    int n;
    /* We can also write k=1 in int statement of 1st one */
    cin>>n;
    for(int i=1, k=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;

        }
        cout<<endl;
    }
    return 0;
}
