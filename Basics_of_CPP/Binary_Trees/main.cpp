#include <iostream>
#include <queue>

using namespace std;

class node{

public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* builtTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    //base Case
    if(data == -1){
        return NULL;
    }

    //recursive call
    cout<<"Enter Data for Inserting Left "<<data<<endl;
    root->left = builtTree(root->left);

    //recursion + backTrackings
    cout<<"Enter data for Inserting right"<<data<<endl;
    root->right = builtTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();

        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inOrder(node* root){

    //base Case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
void preOrder(node* root){

    //base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(node* root){

    //base case
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}


int main()
{
    node* root = NULL;

    //creating a tree;
    root = builtTree(root);
    //input this - 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<<"Printing the level order traversal output: "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder traversal is: "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preOrder traversal is: "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"postorder traversal is: "<<endl;
    postOrder(root);

    return 0;
}
