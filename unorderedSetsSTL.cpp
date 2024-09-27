#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(9);
    s.insert(9);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    if (s.find(7) != s.end()) {
        cout << "7 exists \n";
    } else {
        cout << "7 doesn't exist \n";
    }

    for (auto ol : s) {
        cout << ol << " ";
    }
}