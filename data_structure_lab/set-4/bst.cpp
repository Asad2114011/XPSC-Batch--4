#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 1000
int val[MAX_NODES];        
int leftChild[MAX_NODES];   
int rightChild[MAX_NODES]; 
int nodeCount;           

int createNode(int value) {
    val[nodeCount] = value;
    leftChild[nodeCount] = -1;
    rightChild[nodeCount] = -1;
    return nodeCount++;
}

int input_tree() {
    int rootVal;
    cin >> rootVal;
    int root;
    if (rootVal == -1) {
        root = -1;
    } else {
        root = createNode(rootVal);
    }

    queue<int> q;
    if (root != -1) {
        q.push(root);
        while (!q.empty()) {
            int currentNode = q.front();
            q.pop();

            int l, r;
            cin >> l >> r;

            if (l == -1) {
                leftChild[currentNode] = -1;
            } else {
                leftChild[currentNode] = createNode(l);
                q.push(leftChild[currentNode]);
            }

            if (r == -1) {
                rightChild[currentNode] = -1;
            } else {
                rightChild[currentNode] = createNode(r);
                q.push(rightChild[currentNode]);
            }
        }
    }
    return root;
}

void level_order(int root) {
    if (root == -1) {
        cout << "tree empty" << endl;
        return;
    }
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();

        cout << val[currentNode] << " ";

        if (leftChild[currentNode] != -1) q.push(leftChild[currentNode]);
        if (rightChild[currentNode] != -1) q.push(rightChild[currentNode]);
    }
    cout << endl;
}

int searchBST(int root, int key) {
    int currentNode = root;
    while (currentNode != -1) {
        if (val[currentNode] == key) {
            return currentNode; 
        } else if (val[currentNode] < key) {
            currentNode = rightChild[currentNode]; 
        } else {
            currentNode = leftChild[currentNode]; 
        }
    }
    return -1; 
}

int main() {
    nodeCount = 0;
    int root = input_tree();

    cout << "Level-order traversal of the tree: ";
    level_order(root);

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int result = searchBST(root, key);
    if (result != -1) {
        cout << "Key found at index: " << result+1 << endl;
    } else {
        cout << "Key not found in the tree." << endl;
    }

    return 0;
}
