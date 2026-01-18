/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int diameter(Node* root) {
        int dia = 0;
        solve(root, dia);
        return dia;
    }

    int solve(Node* root, int& dia) {
        if (root == NULL) return 0;

        int lh = solve(root->left, dia);
        int rh = solve(root->right, dia);

        dia = max(dia, lh + rh);

        return 1 + max(lh, rh);
    }
};
