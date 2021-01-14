#include <iostream>
#include <math.h>

using namespace std;

int firstDigit(int num)
{
    int digits = log10(num);
    return num/pow(10, digits);
}

int main()
{
    int arr[] = {15478, 8452, 8232, 874, 985, 4513};
    int size = sizeof(arr)/sizeof(int);
    int first = 0, second = 0;
    for(int i=0; i<size; i++)
    {
        if(((i%2)==0) && i < (size/2))
            first += firstDigit(arr[i]);
        if(((i%2)==0) && i >= (size/2))
            first += arr[i]%10;
        if(((i%2)==1) && i < (size/2))
            second += firstDigit(arr[i]);
        if(((i%2)==1) && i >= (size/2))
            second += arr[i]%10;

    }
    if((first-second)%11 == 0)
        cout<<"OUI";
    else
        cout<<"NON";
    cout<<endl;

    return 0;

}
