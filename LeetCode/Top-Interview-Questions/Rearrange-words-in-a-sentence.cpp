class Solution {
public:
    string arrangeWords(string text) {
        string res;
        vector<vector<string>> words(100001);
        string word;
        text[0] = tolower(text[0]);
        stringstream geek(text);
        int max = 0; int f=0;
        int len = 0;
        while(geek>>word){
            words[word.size()].push_back(word);
            if(word.size() > max){
                max = word.size();
            }
            len++;
        }
        for(int i = 1; i <= max; i++){
            for(int j = 0; j < words[i].size(); j++){
                if(f==0){
                    char c = toupper(words[i][j][0]);
                    words[i][j][0] = c;
                    f=1;
                }
                len--;
                res+=(words[i][j]);
                if(len)
                    res+=" ";
            }
        }
        return res;
    }
};