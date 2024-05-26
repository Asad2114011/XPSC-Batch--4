#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 1000;
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

void preorder(int node) {
    if (node == -1) {
        return;
    }
    cout << val[node] << " ";
    preorder(leftChild[node]);
    preorder(rightChild[node]);
}

int main() {
    nodeCount = 0;
    int root = input_tree();
    preorder(root);
    return 0;
}
