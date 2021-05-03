class Solution {
public:
    vector<string> v;
    
    void re(string &s,int op,int cl){
        if(op==0 && cl==0){
            v.push_back(s);
            return;
        }
        if(op==cl){
            s.push_back('(');
            re(s,op-1,cl);
            s.pop_back();
            return;
        }
        if(op==0){
            s.push_back(')');
            re(s,op,cl-1);
            s.pop_back();
            return;
        }
        s.push_back('(');
        re(s,op-1,cl);
        s.pop_back();
        s.push_back(')');
        re(s,op,cl-1);
        s.pop_back();
    }
    
    vector<string> generateParenthesis(int n) {
        string s;
        re(s,n,n);
        return v;
    }
};

##########################################################


class Solution {
public:
    vector<string> v;
    
    void re(string s,int op,int cl){
        if(op==0 && cl==0){
            v.push_back(s);
            return;
        }
        if(op==cl){
            re(s+'(',op-1,cl);
            return;
        }
        if(op==0){
            re(s+')',op,cl-1);
            return;
        }
        re(s+'(',op-1,cl);
        re(s+')',op,cl-1);
    }
    
    vector<string> generateParenthesis(int n) {
        re("",n,n);
        return v;
    }
};
