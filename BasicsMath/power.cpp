// power exponention
// 2^10 = (2^5)^2  even
// 2^11 = (2^5)^2 X 2  odd
// m = 10^9 + 7

int modularExponantial(int x,int n,int m)
{
    int res=1;

    while(n>0)
    {
        if(n&1)
        {
            // odd
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n=n>>1;   // n=n/2
    }
    return res;
}