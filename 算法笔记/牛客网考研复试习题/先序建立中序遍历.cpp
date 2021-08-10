//二叉树的先序遍历入栈后出栈为中序遍历
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
struct Node{
    char name;
    Node* lchild;
    Node* rchild;
};
string str;
int i=0;
Node* newNode(char v){
    Node* node = new Node;
    node->name = v;
    node->lchild = NULL;
    node->rchild = NULL;
    return node;
}
Node* createTree() {
    char c = str[i++];
    if (c == '#') return NULL;
    Node *root = newNode(c);
    root->lchild = createTree();
    root->rchild = createTree();
    return root;
}

void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->lchild);
    printf("%c ",root->name);
    inorder(root->rchild);
}

int main(){
    while(cin>>str){
        Node* root = createTree();
        inorder(root);
    }
} 
