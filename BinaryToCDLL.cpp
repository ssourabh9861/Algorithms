// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


Node *bTreeToCList(Node *root);
void displayCList(Node *head)
{
    Node *itr = head;
    cout<<"--------------"<<endl;
    do
    {
        cout << itr->data <<" ";
        itr = itr->right;
    } while (head!=itr);
    cout <<endl;
    itr=itr->left;
    cout<<"-----------"<<endl;
    do{
        cout<<itr->data<<" ";
        itr=itr->left;
    }while(head!=itr);
    cout<<itr->data<<endl;
    cout<<"---------"<<endl;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);

        Node *head = bTreeToCList(root);
        displayCList(head);
    }
    return 0;
}

Node* bTreeToCList(Node* root)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL && root->right==NULL)
    {
        Node* temp = newNode(root->data);
        temp->right = temp;
        temp->left = temp;
        return temp;
    }
    else if(root->left==NULL)
    {
        Node* temp  = newNode(root->data);
        Node* temp2 = bTreeToCList(root->right);
        Node* temp3 = temp2->left;
        temp->right = temp2;
        temp2->left = temp;
        temp3->right = temp;
        temp->left = temp3;
        return temp;
    }
    else if(root->right==NULL)
    {
        Node* temp  = newNode(root->data);
        Node* temp2 = bTreeToCList(root->left);
        Node* temp3 = temp2->left;
        temp->left = temp3;
        temp3->right = temp;
        temp2->left = temp;
        temp->right = temp2;
        return temp2;
    }
    else
    {
        Node* temp  = newNode(root->data);
        Node* temp1 = bTreeToCList(root->right);
        Node* temp2 = bTreeToCList(root->left);
        Node* temp11 = temp1->left;
        Node* temp22 = temp2->left;

        temp2->left = temp11;
        temp11->right = temp2;
        temp22->right = temp;
        temp->left = temp22;
        temp1->left = temp;
        temp->right = temp1;
        return temp2;
    }
}





// } Driver Code Ends


