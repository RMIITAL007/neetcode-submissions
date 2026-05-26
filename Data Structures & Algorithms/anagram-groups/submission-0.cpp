class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> temp;
        for(string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            temp.push_back({key, s});
        }
        sort(temp.begin(), temp.end());
        
        vector<vector<string>> result;
        vector<string> group;
        for(int i = 0; i < temp.size(); i++) {
            
            if(i == 0 || temp[i].first == temp[i-1].first) {
                group.push_back(temp[i].second);
            } 
            else {
                result.push_back(group);
                group.clear();
                group.push_back(temp[i].second);
            }
        }
        if(!group.empty())
            result.push_back(group);
        
        return result;

    }
};
