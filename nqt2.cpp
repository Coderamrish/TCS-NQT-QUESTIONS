/*
You are provided with a 2D array(N*M). Your task is to create an ArrayList of Node objects, where each row of the 2D array corresponds to one entry in the ArrayList. After that, a doubly-linked list is constructed, arranging nodes first by even indices from the ArrayList, followed by the odd indices.
Input Format
The first line contains an integer N, representing the size of the array row.
The second line contains an integer M, representing the size of array col.
The third line contains an array.
Output Format
return the linked list
Constraints
1 <= N < 10^2
1 <= M < 10^2
*/
#include <bits/stdc++.h>
using namespace std;
struct Node {
    vector<int> data;  
    Node* prev;
    Node* next;
    Node(vector<int> row) {
        data = row;
        prev = next = NULL;
    }
};
Node* buildList(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<Node*> nodes;
    for (int i = 0; i < n; i++) {
        nodes.push_back(new Node(arr[i]));
    }
    Node* head = NULL;
    Node* prev = NULL;
    for (int i = 0; i < n; i += 2) {
        if (!head) head = nodes[i];
        if (prev) {
            prev->next = nodes[i];
            nodes[i]->prev = prev;
        }
        prev = nodes[i];
    }
    for (int i = 1; i < n; i += 2) {
        if (!head) head = nodes[i];
        if (prev) {
            prev->next = nodes[i];
            nodes[i]->prev = prev;
        }
        prev = nodes[i];
    }
    return head;
}

/*
TC : O(N*M)
SC:O(N*M)
*/