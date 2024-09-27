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

    ~Node() {
        if (next) {
            delete next;
        }
    }
};

class HashTable {
    int totSize;
    int currSize;
    Node** table;

    int HashFunction(string key) {
        int idx = 0;

        for (int i=0; i<key.size(); i++){
            idx = idx + (key[i]*key[i]) % totSize;
        }

        return idx;
    }

    void rehash() {
        Node** oldTable = table;
        int oldSize = totSize;

        totSize = 2 * totSize;
        table = new Node*[totSize];

        for (int i=0; i<totSize; i++) {
            table[i] = NULL;
        }

        //copy old values

        for (int i=0; i<oldSize; i++) {
            Node* temp = oldTable[i];
            while (temp) {
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if (oldTable[i]) {
                delete oldTable[i];
            }
        }
    }

public:
    HashTable(int size) {
        totSize = size;
        currSize = 0;
        table = new Node*[totSize];

        for (int i=0; i<totSize; i++) {
        table[i] = NULL;
    }
    }

    void insert(string key, int val) {
        int idx = HashFunction(key);

        Node* newNode = new Node(key,val);
        Node* head = table[idx];

        newNode->next = head;
        head = newNode;

        currSize++;

        double lamda = currSize / (double) totSize;

        if (lamda > 1) {
            rehash();
        }
    }

    
};

int main() {
    HashTable ht (5);
    return 0;
}