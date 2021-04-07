// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to check if the number is sparse
    // n : is the number to check if it is sparse
    bool isSparse(int n){
        
        // Your code
        /*if((n&(n<<1))==0)
            return true;
        else
            return false;*/
            
        return (n&(n>>1))==0;


    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
