#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1,2,7,11,15,5,9};
    int target = 9;

    unordered_map<int, int> m;

    for (int i = 0; i<arr.size(); i++) {
        int comp = target - arr[i];

        if (m.count(comp)) {
            cout << "ans : " << i << "," << m[comp] << endl;
        }

        m[arr[i]] = i;
    }
}