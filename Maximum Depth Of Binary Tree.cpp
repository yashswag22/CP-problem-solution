class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
       if(root == NULL) return 0;
       
       int ih = maxDepth(root->left);
       int rh = maxDepth(root-> right);
       
       return 1+max(ih,rh);
    }
};
