#include <bits/stdc++.h>
using namespace std;
 
const int MAX_NODES = 1000;
int val[MAX_NODES];        
int nextNode[MAX_NODES];    
int nodeCount;             
int head = -1;              

int createNode(int value) {
    val[nodeCount] = value;
    nextNode[nodeCount] = -1; 
    return nodeCount++;
}

void insert_at_tail(int value) {
    int newNode = createNode(value);
    if (head == -1) { 
        head = newNode;
    } else {
        int tmp = head;
        while (nextNode[tmp] != -1) { 
            tmp = nextNode[tmp];
        }
        nextNode[tmp] = newNode; 
    }
    cout << "Inserted at tail" << endl << endl;
}

void print_linked_list() {
    if (head == -1) {
        cout << "Your linked list is empty." << endl;
        return;
    }
    cout << endl;
    cout << "Your linked list: ";
    int tmp = head;
    while (tmp != -1) {
        cout << val[tmp] << " ";
        tmp = nextNode[tmp];
    }
    cout << endl;
}

void insert_at_position(int pos, int value) {
    if (pos == 0) { 
        int newNode = createNode(value);
        nextNode[newNode] = head;
        head = newNode;
        cout << endl << endl << "Inserted at position " << pos << endl << endl;
        return;
    }
    
    int tmp = head;
    for (int i = 1; i < pos; i++) {
        if (tmp == -1) { 
            cout << "Invalid position" << endl;
            return;
        }
        tmp = nextNode[tmp];
    }

    if (tmp == -1) { 
        cout << "Invalid position" << endl;
        return;
    }

    int newNode = createNode(value);
    nextNode[newNode] = nextNode[tmp];
    nextNode[tmp] = newNode;
    cout << endl << endl << "Inserted at position " << pos << endl << endl;
}

int main() {
    nodeCount = 0;
    head = -1;    

    while (true) {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;
        int op;
        cin >> op;

        if (op == 1) {
            cout << "Enter value: ";
            int value;
            cin >> value;
            insert_at_tail(value);
        } else if (op == 2) {
            print_linked_list();
        } else if (op == 3) {
            cout << "Enter position: ";
            int pos;
            cin >> pos;
            cout << "Enter value: ";
            int value;
            cin >> value;
            insert_at_position(pos, value);
        } else if (op == 4) {
            break;
        }
    }
    return 0;
}
