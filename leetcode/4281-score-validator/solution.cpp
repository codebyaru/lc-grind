class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int sc=0,  c=0;
        for(string x:events){
            if(c==10) break;
            if(x=="1"||x=="2"||x=="3"||x=="4"||x=="6")
                sc+=stoi(x);
            if(x=="W") c++;
            if(x=="WD") sc++;
            if( x=="NB") sc++;
        }
        return {sc,c};
    }
};
