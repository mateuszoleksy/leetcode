class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> liczby;
        int b = 0;
        for (int a = b+1; a < nums.size(); a++) {
            if (nums.at(b) + nums.at(a) == target)
            {
                liczby.push_back(b);
                liczby.push_back(a);
                break;
            } else if (a == nums.size()-1)
            {
                b++;
                a=b;
            }
        }
        return liczby;
    }
};
