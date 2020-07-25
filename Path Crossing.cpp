class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> coordinates;
        pair<int,int> crd={0,0};
        coordinates.insert(crd);
        
        for(auto p:path){
            switch(p){
                case 'N':crd.second++;break;
                case 'S':crd.second--;break;
                case 'E':crd.first++;break;
                case 'W':crd.first--;break;
            }
            if(coordinates.find(crd)!=coordinates.end())
                return true;
            coordinates.insert(crd);
        }
        
        return false;
    }
};
