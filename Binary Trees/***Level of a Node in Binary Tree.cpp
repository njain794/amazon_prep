int solve(Node *root,int a,int k,bool &flag)
{
    if(root==NULL)
    {
        //flag = false;
        return 0;
    }
    if(root->data==a)
    {
        flag=true;
        return k;
    }
    int lt=solve(root->left,a,k+1,flag);
    int rt=solve(root->right,a,k+1,flag);
    return max(lt,rt); //corner case
}
int getLevel(struct Node *node, int target)
{
    bool flag=false;
    int k=1;
    int d=solve(node,target,k,flag);
    if(flag==true)
    {
        return d;
    }
    return 0;
	//code here
}
