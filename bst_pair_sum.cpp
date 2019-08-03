bool isPairPresent(struct node *root, int target)
{
    node *temp;
    vector<int> v;
    
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        if (temp->val < target || temp->val == target)
        {
            
            for (int i=0; i<v.size(); i++)
            {
                if ((temp->val + v[i] )== target)
                {
                    return(1);
                }
            }
            v.push_back(temp->val);
            
        }
        if (temp->left!=NULL) q.push(temp->left);
        if (temp->right!=NULL) q.push(temp->right);
        q.pop();
    }
    return(0);
}