class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string S1 = "";
        string S2 = "";

        for(string val:word1){
            S1 += val;
        }
        for(string val:word2){
            S2 += val;
        }
    return S1 ==  S2;
    }
};