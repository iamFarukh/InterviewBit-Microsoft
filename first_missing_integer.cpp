/*
Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.
*/

int Solution::firstMissingPositive(vector<int> &A) {
    int n=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>0) n++;
    }
    vector<bool>v(n+1,false);
    for(int i=0;i<A.size();i++){
        if(A[i]>0&&A[i]<=n) v[A[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(!v[i]) return i;
    }
    return n+1;
}
