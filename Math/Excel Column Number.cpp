int Solution::titleToNumber(string A) {
    long long int ans=0;
    for(int i=0;i<A.length();i++){
        ans = ans*26 + (A[i]-'A'+1);
    }
    return ans;
}