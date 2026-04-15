class Solution {
public:
    int mostWordsFound(vector<string>& sent) {
    int max =0;
    for(int i=0;i<sent.size();i++){
        int count=1;
        for(int j=0;j<sent[i].size();j++){
            if(sent[i][j]==' '){
            count++;
            }
        }
        if(max < count){
            max=count;
        }
    }
    return max;    
    }
};