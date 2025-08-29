#include <bits/stdc++.h>

using namespace std;
struct TreeNode{
int value;
TreeNode* left;
TreeNode* right;
TreeNode(int val){
value=val;
  left=nullptr;
  right=nullptr;
}
};
string serialize(TreeNode* root){
if(root==nullptr){
  return "None"
}
return serialize(root->left) + "#" + to_string(root->val) + "#" + serialize(root->right);
}
int main(){

}
