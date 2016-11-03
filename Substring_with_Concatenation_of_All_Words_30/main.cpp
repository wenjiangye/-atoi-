class Solution {
public:
  //  using namespace __gnu_cxx;
   // using namespace __gnu_cxx;
    vector<int> findSubstring(string s, vector<string>& words) {
        if(s.length() == 0)
        return {};
        int len = words[0].length();
        vector<int> res;
        map<string,int> allwords;
        for(int i = 0; i < words.size(); i++)
           {
               if(allwords.find(words[i]) != allwords.end())
                 allwords[words[i]]++;
               else
                 allwords[words[i]] = 1;
           }
        int lastlen = len * words.size();
        for(int i = 0; i <= (int)s.length() - lastlen; i++)
        {
            map<string,int> findwords;
            for(int j = 0; j < words.size(); j++)
            {
             string tmp_s = s.substr(i + j * len, len);
             if(allwords.find(tmp_s) == allwords.end())
                break;
             if(findwords.find(tmp_s) != findwords.end())
                 findwords[tmp_s]++;
             else
                 findwords[tmp_s] = 1;
            }
            if(findwords == allwords)
            res.push_back(i);
        }
        return res;
    }
};
