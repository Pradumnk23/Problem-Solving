class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans=0;
        while(N)
        {
            N=N&(N<<1);
            ans++;
        }
        return ans;
    }
};
