class Solution {
public:
  vector<vector<int>>ans;
    void f(int k,int n,vector<int>v,int a){
        if(k==0){
            if(n==0){
                ans.push_back(v);
            }
            return;
        }
        if(a>9)return;
        v.push_back(a);
        f(k-1,n-a,v,a+1);
        v.pop_back();
        f(k,n,v,a+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        f(k,n,v,1);
        return ans;
    }
};
