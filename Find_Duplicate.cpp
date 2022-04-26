/*
Given a read only array of n + 1 integers between 1 and n, 
find one number that repeats in linear time using less than O(n) 
space and traversing the stream sequentially O(1) times.
Sample Input:

[3 4 1 4 1]

Sample Output:

1
*/

int Solution::repeatedNumber(const vector<int> &A) {
    int max_int = A[0];
     for(int i =1;i<A.size();i++){
        if(A[i]>max_int){
            max_int = A[i];
        }
    }
    int fre_arr[max_int+1] = {0};
    
    for(int i =0;i<A.size();i++){
        fre_arr[A[i]]+= 1;
    }

    for(int i =1;i<max_int+1;i++){
        if(fre_arr[i] > 1){
            return i;
        }
    }
    return -1;
}


