#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
class Tree{
  public:
  Node*root;
  Tree(){
      root=nullptr;
  }
  void input(int data){
    Node*newNode=new Node(data);
    if(root==nullptr)root=newNode;
    Node*temp=root;
    while(true){
        if(data>temp)
    }
  }
};
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}