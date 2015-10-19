/* Implement! */
#include <stdio.h>

int max(int a, int b)
{
    return a<b ? b : a;
}

int maxSubArray(int A[], int n)
{
    int last=-1e9, ans=-1e9, i;
    for(i=0; i<n; ++i) {
        last = max(0,last)+A[i];
        ans = max(ans,last);
    }
    return ans;
}

int main()
{
    int ex[9]= {-2,1,-3,4,-1,2,1,-5,4};
    printf("%d\n",maxSubArray(ex,9));
    return 0;
}

