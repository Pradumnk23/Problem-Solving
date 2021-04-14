#include <iostream>
#include<iterator>
#include<map>
using namespace std;

int main() {
	// your code goes here

	int t;
	long n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    long a;
	    map<long,long> b;
	    
	    for(int j=0;j<n;j++)
	    {
	       cin >> a;
	        b[a]+=1;
	    }
	    for(auto x:b)
	    {
	        if(x.second == 3)
	        {
	            cout << (x.first * 3 ) << endl;
	        }
	    }
	   
	}
	
	return 0;
}
