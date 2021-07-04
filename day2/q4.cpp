class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int,char>>p;
        int n=s.length();
        for(int i=0;i<n;i++){
            p.push_back(make_pair(indices[i],s[i]));
            
        }
        sort(p.begin(),p.end());
        string str;
        for(int i=0;i<p.size();i++){
            str.push_back(p[i].second);
        }
        return str;
    }
};
