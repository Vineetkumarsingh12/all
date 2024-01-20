#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void minJump(int index, vector<int>& nums, int cnt, int& ans) {
        if (index >= nums.size() - 1) {
            ans = min(ans, cnt);
            return;
        }

        for (int i = 1; i <= nums[index]; i++) {
            minJump(index + i, nums, cnt + 1, ans);  // Use index + i instead of index + 1
        }
    }

public:
    int jump(vector<int>& nums) {
        int ans = INT_MAX;
        minJump(0, nums, 0, ans);
        return (ans == INT_MAX) ? -1 : ans;  // Handle the case where no solution is found
    }
};

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    Solution s;
    int result = s.jump(nums);
    cout << result << endl;
    return 0;
}
