#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> umap;
        int j = 0, mx = 0;
        for (int i = 0; i < s.size(); i++) {
            umap[s[i]]++;
            if (umap.size() == i - j + 1) {
                mx = max(mx, i - j + 1);
            } else if (umap.size() <i - j + 1) {
                while (umap.size() <i - j + 1) {
                    umap[s[j]]--;
                    if (umap[s[j]] == 0) {
                        umap.erase(s[j]);
                    }
                    j++;
                }
            }
        }
        return mx;
    }
};

int main() {
  
        string s="aabacbebebe";
        int k=3;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
   
    return 0;
}
