#include "macros.h"

struct Node{
    int val = 0;
    int count = 0;
    Node* left = NULL;
    Node* right = NULL;

    Node(int val, int count) : val(val), count(count) {
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Insert(Node* root, int val){
    if (!root){
        Node* node = new Node(val, 1);
        return node;
    }
    // already exists
    if (root->val == val){
        root->count++;
    }
    else if (val < root->val){
        root->left = Insert(root->left, val);
    }
    else{
        root->right = Insert(root->right, val);
    }
    return root;
}

//add code to search closest in BST, and delete from BST is count reaches 0

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> tickets;
    vector<int> maxPrices;

    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        tickets.push_back(x);
    }
    for (int i = 0; i < m; ++i){
        int x;
        cin >> x;
        maxPrices.push_back(x);
    }
    	


    return 0;
}
