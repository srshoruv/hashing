#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int subArraySum(vector<int> arr, int k) {
    unordered_map<int, int> m;
    m[0] = 1;
    int sum = 0;
    int ans = 0;

    for (int i = 0; i<arr.size(); i++) {
        sum += arr[i];
        if (m.count(sum-k)) {
            ans += m[sum-k];
        }

        if(m.count(sum)) {
            m[sum]++;
        } else {
            m[sum] = 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {10,2,-2,-20,10};
    int k = -10;

    cout << subArraySum(arr, k);
}