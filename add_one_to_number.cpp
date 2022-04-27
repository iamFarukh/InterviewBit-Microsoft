/*
Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: 
for this problem, following are some good questions to ask :

Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.


Input Format
First argument is an array of digits.



Output Format
Return the array of digits after adding one.



Example Input
Input 1:

[1, 2, 3]


Example Output
Output 1:

[1, 2, 4]


Example Explanation
Explanation 1:

Given vector is [1, 2, 3].
The returned vector should be [1, 2, 4] as 123 + 1 = 124.
*/

vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),carry=0;
    vector<int>res;
    res.push_back((1+A[n-1])%10);
    carry=(1+A[n-1])/10;
    for(int i=n-2;i>=0;i--){
        res.push_back((carry+A[i])%10);
        carry=(carry+A[i])/10;
    }
    if(carry)
     res.push_back(carry);
    int x=res.size();
    for(int i=0;i<x/2;i++)
     swap(res[i],res[x-i-1]);
    while(res[0]==0){
       res.erase(res.begin());
    }
    return res;
