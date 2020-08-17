class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int pn=0;
        int pt=0;
        while(pn<name.length() && pt<typed.length()){
            if(name[pn]==typed[pt]){
                pn++;
                pt++;
            }
            else if(pt>0 && typed[pt]==typed[pt-1])
                pt++;
            else return false;
        }
        if(pn!=name.length()) return false;
        for(;pt<typed.length();pt++)
            if(typed[pt]!=typed[pt-1]) return false;
        return true;
    }
};
