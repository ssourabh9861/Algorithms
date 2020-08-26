// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;

	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}// } Driver Code Ends


/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/
int k = 0;
Node* convert(string str)
{
    Node* temp =new Node(str[k]);
    if(k==str.length()-1)
    {
        return temp;
    }
    k++;
    if(str[k]=='?')
    {
        k++;
        Node* temp1 = convert(str);
        temp->left = temp1;
        k++;
        Node* temp2 = convert(str);
        temp->right= temp2;
    }
    return temp;
}
Node *convertExpression(string str,int i)
{
    k = i;
    return convert(str);
}
