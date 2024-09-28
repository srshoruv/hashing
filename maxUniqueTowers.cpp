#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long maximumTotalSum(vector<int>& maximumHeight) {
        
    unordered_map<int, int> m;
    int count = 1;
    for (int i=0; i<maximumHeight.size(); i++) {
        
        if (m.count(maximumHeight[i])) {
            m[maximumHeight[i]] = count++;
        } else {
            m[maximumHeight[i]] = count;
        }
    }

    for (int i=0; i<maximumHeight.size(); i++) {
        if (m[maximumHeight[i]] > 1) {
            while ( m[maximumHeight[i]] == 1 && maximumHeight[i]>0) {
                maximumHeight[i]--;
                 m[maximumHeight[i]] = count--;
            }
        }
    }

        for (int i=0; i<maximumHeight.size(); i++) {
            cout << maximumHeight[i] << ",";
        }

        // // this function is correct
        // long long sum = 0;
        // for (int i=0; i<maximumHeight.size(); i++) {
        //     sum += maximumHeight[i];
        // }
        // return sum;
    }

int main () {
    vector<int> maximumHeight = {4,6,5,1,6};
    cout << maximumTotalSum(maximumHeight);
}