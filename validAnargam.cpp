#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool validAnargam(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    unordered_map<char, int>m;

    for (int i=0; i<s.size(); i++) {
        if (m.count(s[i])) {
            m[s[i]]++;
        } else {
            m[s[i]] = 1;
        }
    }

    for (int i=0; i<t.size(); i++) {
        if (m.count(t[i])) {
            m[t[i]]--;
            if (m[t[i]]==0) {
                m.erase(t[i]);
            }
        } else {
            return false;
        }
    }

    return m.size() == 0;
}

int main (){
    string s = "lipid";
    string t = "tulip";
    cout << validAnargam(s,t);
    return 0;
}