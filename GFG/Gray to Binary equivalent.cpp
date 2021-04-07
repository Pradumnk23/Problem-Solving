class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        int num=0;
        while(n)
        {
            num^=n;
            n=n>>1;
        }
        return num;
    }
};
