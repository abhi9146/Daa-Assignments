#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    struct TreeNode *left, *right;
};

TreeNode* NewTreeNode(int val){

    TreeNode* temp = new TreeNode;
     temp -> data = val;
     temp -> left = temp -> right = NULL;
     return temp;

}

void PreInPostTraversal(TreeNode* root){
    stack<pair<TreeNode*, int>> st;
    st.push({root, 1});
    vector<int>Pre, In, Post;
    if(root == NULL) return;
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(it.second == 1){
            Pre.push_back(it.first -> data);
            it.second++;
            st.push(it);

            if(it.first -> left != NULL){
                st.push({it.first -> left, 1});
            }
        }
        else if(it.second == 2){
            In.push_back(it.first -> data);
            it.second++;
            st.push(it);

            if(it.first -> right != NULL){
                st.push({it.first -> right, 1});
            }
        }
        else Post.push_back(it.first -> data);
    }

    cout<<"Preorder Traversal : ";
    for( int i = 0; i < Pre.size(); i++){
        cout<<Pre[i]<<" ";
    }
    cout<<endl;

    cout<<"Inorder Traversal : ";
    for( int i = 0; i < In.size(); i++){
        cout<<In[i]<<" ";
    }
    cout<<endl;

    cout<<"Postorder Traversal : ";
    for( int i = 0 ; i < Post.size(); i++){
        cout<<Post[i]<< " ";
    }
    cout<<endl;
}

int main(){
    struct TreeNode* root = NewTreeNode(1);
    root->left = NewTreeNode(2);
    root->right =  NewTreeNode(3);
    root->left->left = NewTreeNode(4);
    root->left->right =  NewTreeNode(5);
    root->right->left = NewTreeNode(6);
    root->right->right =  NewTreeNode(7);

    PreInPostTraversal(root);
}