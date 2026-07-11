class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest_c_p;
        int min_length = 200;
        for(int k = 0; k < strs.size(); k++){
            if(strs[k].length() < min_length){
                min_length = strs[k].length();
            }
        }
        for(int i = 0; i < min_length; i++){
           for(int j = 0; j < strs.size()-1; j++){
                if(strs[j][i] == strs[j+1][i]){
                    
                }
                else{
                    return{longest_c_p};
                }
                
           } 
           longest_c_p += strs[0][i];
        }
        return{longest_c_p};
    }
};