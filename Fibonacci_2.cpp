#include <iostream>

using namespace std;

int main()
{
    int n, arr[100];
    cin>>n;

    arr[0]=0;
    arr[1]=1;
    cout<<arr[0]<<" "<<arr[1]<<" ";

    for(int i=2; i<n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
