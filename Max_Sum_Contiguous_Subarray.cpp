/*
Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A.
Output Format:

Return an integer representing the maximum possible sum of the contiguous subarray.
Constraints:

1 <= N <= 1e6
-1000 <= A[i] <= 1000
For example:

Input 1:
    A = [1, 2, 3, 4, -10]

Output 1:
    10
*/

int Solution::maxSubArray(const vector<int> &A) {
    auto i=A.begin();
    long long int m,s,flag=0;
    m=0;s=0;
    for(i=A.begin();i!=A.end();i++)
    {
        if(*i>0)
        {
            flag=1;
        }
        m=m+*i;
        if(m<0)
        m=0;
        if(m>s)
        {
            s=m;
        }
    }
    if(flag==0)
    {
        s=*max_element(A.begin(),A.end());
    }
    return s;
}
