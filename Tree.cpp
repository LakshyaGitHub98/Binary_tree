// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->right=nullptr;
        this->left=nullptr;
    }
};
void preorder(Node*root){
    Node*temp=root;
    if(temp==NULL)return ;
    cout<<root->data<<endl;
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(Node*root){
    Node*temp=root;
    if(temp==NULL)return;
    inorder(temp->left);
    cout<<temp->data<<endl;
    inorder(temp->right);
}
void postorder(Node*root){
    Node*temp=root;
    if(temp==NULL)return ;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<endl;
}
vector<vector<int>> levelOrder(Node*root){
    vector<vector<int>>ans;
    if(root==NULL)return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node*temp=q.front();
            q.pop();
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main() {
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    root->right->left=new Node(7);
    vector<vector<int>>lvl=levelOrder(root);
    for(int i=0;i<lvl.size();i++){
        for(int j=0;j<lvl[i].size();j++){
            cout<<lvl[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}