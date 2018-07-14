#include <iostream>
#include <stdlib.h>
using namespace std;
struct BstNode{
int data;
BstNode *left; 
BstNode *right;
};
BstNode *GetnewNode(int data)
{ BstNode *newNode=new BstNode();
newNode->data=data;
newNode-> left=NULL;
newNode->right=NULL;
return newNode;
}
BstNode *Insert(BstNode* root,int data)
{
if(root==NULL)
root=GetnewNode(data);


if(data<=root->data)
{
root->left=Insert(root->left,data);
}
else if(data=root->data)
{
root->right=Insert(root->left,data);
}
return root;
}
bool Search(BstNode* root,int data){
if(root=NULL)return false;
else if(root->data==data) return true;
else if(data<=root->data) return Search(root->left,data);
else return Search(root->right,data);
}
int main()
{
BstNode* root;
root=NULL;
root=Insert(root,15);
root=Insert(root,10);
root=Insert(root,20);
root=Insert(root,25);
root=Insert(root,8);
root=Insert(root,12);
int number;
cout<<"Enter number to be searched\n";
cin>>number;
if(Search(root,number)==true) cout<<"Found\n";
else cout<<"Not Found\n";
return 0;
}
// Search operations with binary trees will take log(base 2) n seconds

