

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
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
    Node* root = new Node(stoi(ip[0]));

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
            currNode->left = new Node(stoi(currVal));

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
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int maxNodeLevel(Node *root);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        int ans = maxNodeLevel(root);
        cout<<ans<<endl;
    }
    return 1;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
void level(Node *node, vector<int> &m, int height)
{
    if(node==NULL)
    return;

    if(m.size()<height+1)
    {
        m.push_back(1);
    }
    else
    {
        m[height]++;
    }

    if(node->left!=NULL)
    {
        level(node->left, m, height+1);
    }
    if(node->right!=NULL)
    {
        level(node->right, m, height+1);
    }
}

// Return the level (0-indexed) with maximum number of nodes.
int maxNodeLevel(Node *root)
{
    vector<int> arr;
    level(root, arr, 0);
    int max=0,lev=0;
    for(auto i=0; i<arr.size();i++)
    {
        if(max<arr[i])
        {
            lev=i;
            max = arr[i];
        }
        cout<<arr[i]<<" ";
    }
    cout<<"fuck"<< endl;
    return lev+1;
}
