#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;  
    
int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int i=0; i<nums.size(); i++) {
            if(m.count(nums[i])) {
                m[nums[i]]++;
            } else {
                m[nums[i]] = 1;
            }
        }
        int n = nums.size();
        for (pair<int, int>p : m) {
            if (p.second > n/2) {
                return p.first;
            }
        }

        return -1;
        
    }

int main () {
// Input: Large array where the majority element appears in a scattered pattern
vector<int> nums = {10, 10, 9, 10, 8, 10, 9, 10, 10, 10, 10};
cout << majorityElement(nums) << endl; // Expected output: 10
}
