#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int countDisnt(vector<int> arr) {
    unordered_set<int> s;

    for (int i=0; i<arr.size(); i++) {
        s.insert(arr[i]);
    }

    for (auto el : s) {
        cout << el << " ";
    }
    cout << endl;

    return s.size();
}

int main(){
    vector<int> arr = {4,3,2,5,6,7,3,4,2,1};
    cout << "count: " << countDisnt(arr);
}