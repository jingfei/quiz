/* Implement! */
#include <stdio.h>

int max(int a, int b)
{
    return a<b ? b : a;
}

int maxSubArray(int A[], int n, int last, int ans)
{
    if(n==0) return ans;
    last = max(0,last)+A[0];
    ans = max(ans,last);
    return maxSubArray(A+1,n-1,last,ans);
}

int main()
{
    int ex[9]= {-2,1,-3,4,-1,2,1,-5,4};
    printf("%d\n",maxSubArray(ex,9,-1e9,-1e9));
    return 0;
}

