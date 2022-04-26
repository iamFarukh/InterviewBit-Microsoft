/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.
*/

int func(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    string ans;
    int countzero = 0;
    vector<string> str;
    for (int i =0;i<A.size();i++){
        if(A[i] == 0) countzero++;
        str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),func);
    if(countzero == A.size()) return "0";

    for(int j=0;j<A.size();j++) {
        ans += str[j];
        }

    return ans;
}
