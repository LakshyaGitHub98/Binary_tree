#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node*left,*right;
    Node(int data){
        this->val=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
Node* insertBST(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
    }
    if (key < root->val) {
        root->left = insertBST(root->left, key);
    } else {
        root->right = insertBST(root->right, key);
    }
    return root;
}
Node* createBST(vector<int> arr, int n) {
    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        root = insertBST(root, arr[i]);
    }
    return root;
}
void inorder(Node*root){
    Node*temp=root;
    if(temp==NULL)return;
    inorder(temp->left);
    cout<<temp->val<<endl;
    inorder(temp->right);
}
int main(){
    vector<int>arr={5,3,2,6,7,1,4,8,9};
    Node*root=createBST(arr,arr.size());
    inorder(root);
    return 0;
}