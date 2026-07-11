class Solution {
public:
    int countSegments(string s) {

        int count = 0 ;
        vector<string> str;
        string word = ""; 
        for(int i = 0 ; i <= s.length() ; i++)
        {
         
            if(i < s.length() && s[i] != ' ')
            {
                word += s[i]; 
            }
          
            else if (!word.empty()) 
            {
                str.push_back(word);
                word = ""; 
            }
        }

    
        for(int i = 0 ; i < str.size(); i++)
        {
            count++ ;
        }

        return count ;
    }
};
