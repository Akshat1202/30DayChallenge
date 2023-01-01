class Solution {
public:
    int solve(int a,int b,string c){
        if(c=="+")return a+b;
        if(c=="-")return b-a;
        if(c=="*")return a*b;
        if(c=="/")return (b/a);
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int n=tokens.size();
        int ans=0;
        for(auto op:tokens){
            if(op=="+"||op=="-"||op=="*"||op=="/"){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                s.push(solve(x,y,op));
            }
            else{
                s.push(stoi(op));
            }
        }
        return s.top();
    }
};
