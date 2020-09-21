/*
*********************** HEIGHT OF BINARY TREE ****************
Given a binary tree, find its height.

​​Example 1:

Input:
      1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   
Your Task:
You don't need to read input or print anything. Your task is to complete the function height() that takes root Node of the Tree as input and returns the Height of the Tree. If the Tree is empty, return 0. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105

 

** For More Input/Output Examples Use 'Expected Output' option **


*/

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

<<<<<<<--------- functions of tree structure----------->>>>>>>>

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
int height(struct Node* node);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		cout<<height(root)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

// return the Height of the given Binary Tree
 
<<<<<<<<<-------- Main height Function -------->>>>>>>>

int height(Node* root)
{   
    if(root==NULL){
        return 0;
        
    }
    
    int lftreeHeight= height(root->left);
    int rttreeHeight= height(root->right);
    
    return max(lftreeHeight,rttreeHeight)+1;
    
   // Your code here
   
   
}

