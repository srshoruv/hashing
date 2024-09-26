#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val) {
        this->key = key;
        this->val = val;
    }
};

class HashTable {
    int totSize;
    int currSize;
    Node** table;
public:
    HashTable(int size) {
        totSize = size;
        currSize = 0;
        table = new Node*[totSize];

        for (int i=0; i<totSize; i++) {
        table[i] = NULL;
    }
    }

    
};

int main() {
    HashTable ht (5);
    return 0;
}