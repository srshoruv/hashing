#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string , int> m;
    m["Bangladesh"] = 160;
    m["India"] = 300;
    m["Bhutan"] = 16;
    m["Nepal"] = 60;

    m.erase("India");
    m["Nepal"] = 100;

    for (pair<string, int> country : m) {
        cout << country.first << " : " << country.second << endl;
    }

    if(m.count("Bangladesh")) {
        cout << "Bangladesh exists" << endl;
    } else {
        cout << "Bangladesh doesn't exist" << endl;
    }

}