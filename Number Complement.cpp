class Solution {
public:
    int findComplement(int num) {
        
        //Flip all starting 0 to 1
        for(int i=31;i>=0;i--){
            if( (num&(1<<i))==0 )
                num=num|1<<i;
            else
                break;
        }
        
        return ~num;
    }
};
