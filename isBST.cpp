#include <iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
	struct TreeNode{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode():val(0), left(nullptr), right(nullptr){}
		TreeNode(int x): val(x), left(nullptr), right(nullptr){}
		TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}
		bool isValidBST(TreeNode* root);
		bool isBSThelper(TreeNode* root, TreeNode* left, TreeNode* right);
	};

    bool isValidBST(TreeNode* root) {
        return isBSThelper(root, nullptr, nullptr);
    }

    bool isBSThelper(TreeNode* root, TreeNode* left, TreeNode* right) {
        if (root == nullptr) {
            return true;
        }

        if (left != NULL and root->val <= left->val)
            return false;
        
        if (right!= NULL and root->val >= right->val)
            return false;
        // check recursively for every node.
        return isBSThelper(root->left, left, root) and
           isBSThelper(root->right, root, right);   
    }
                
};

/* Driver program to test above functions*/
int main()
{
    struct Node *root = new Node(3);
    root->left        = new Node(2);
    root->right       = new Node(5);
    root->left->left  = new Node(1);
    root->left->right = new Node(4);

    if (isValidBST(root))
        cout << "Is BST";
    else
        cout << "Not a BST";

    return 0;
}