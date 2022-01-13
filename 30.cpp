class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long ans=INT_MAX;
        int i=0,j=m-1;
        while(j<n){
            ans=min(ans,a[j]-a[i]);
            i++;j++;
        }
        return ans;
    }   
};
