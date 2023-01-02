class Solution {
public:
    string getHint(string secret, string guess) {
        string s="";
        int b=0;
        int c=0;
        map<char,int>m1,m2;
        for(auto x:secret)m1[x]++;
        for(auto x:guess)m2[x]++;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])b++;
        }
        int total=0;
        for(auto x:m1){
               if(m2[x.first]!=0)total+=min(m2[x.first],x.second);
        }
        c=total-b;
        s= to_string(b)+"A"+to_string(c)+"B";
        return s;

    }
};
