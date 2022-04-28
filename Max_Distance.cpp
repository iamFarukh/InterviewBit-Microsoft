/*
Problem Description

Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].



Input Format
First and only argument is an integer array A.



Output Format
Return an integer denoting the maximum value of j - i;



Example Input
Input 1:

 A = [3, 5, 4, 2]


Example Output
Output 1:

 2


Example Explanation
Explanation 1:

 Maximum value occurs for pair (3, 4).
*/


int Solution::maximumGap(const vector<int> &A) {
    if(A.size()<1) return -1;
    int n=A.size();
    int ans=0,flag=0;
    vector<pair<int,int>>p; 
    for(int i=0;i<n;i++){
        p.push_back({A[i],i});
    }
    sort(p.begin(),p.end());
    int dp[n]; 
    dp[n-1]=p[n-1].second;
    for(int i=n-2;i>=0;i--){
        dp[i] = max(dp[i+1],p[i].second);
    }
    for(int i=0;i<n-1;i++){
        ans = max(ans,dp[i+1]-p[i].second);
    }
    return ans;
}
