bool isBST(Node* root) {
     stack<Node *> s;
    queue<Node *> q;
    
    Node * temp;
    Node * node;
    Node * temp1;
    Node *nn;
    if (root == NULL)
    return (1);
    q.push(root);
    //temp = root;
    while (!q.empty())
    {
        temp = q.front();
        if (temp->left!=NULL)
        {
            nn = temp->left;
            if (nn->data < temp->data)
            q.push(temp->left);
            else
            return(0);
        }
        if (temp->right!=NULL)
        {
            nn = temp->right;
            if (nn->data > temp->data || nn->data == temp->data) 
            q.push(temp->right);
            else
            return(0);
        }
        
        q.pop();
        
        //left subtree
        if (temp->left!=NULL){
        s.push(temp->left);
        
        node = s.top();
        while (!s.empty())
        {
            
                while(node->left!=NULL)
                {
                    node = node->left;
                    if (node->data < temp->data)
                    {
                        s.push(node);
                    }
                    else
                    {
                        return(0);
                    }
                }
                temp1 = s.top();
                s.pop();
                if (temp1->right!=NULL)
                {
                    temp1 = temp1->right;
                    s.push(temp1);
                    if (temp1->data < temp->data) node = temp1;
                    else {
                    return(0);
                }
                }
                
                
            
        } //while
        
        }
        //right subtree
        if (temp->right!=NULL){
        s.push(temp->right);
        
        node = s.top();
        while (!s.empty())
        {
            
                while(node->right!=NULL)
                {
                    node = node->right;
                    if (node->data > temp->data || node->data == temp->data)
                    {
                        s.push(node);
                    }
                    else
                    {
                        return(0);
                    }
                }
                temp1 = s.top();
                s.pop();
                if (temp1->left!=NULL)
                {
                    temp1 = temp1->left;
                    s.push(temp1);
                    if (temp1->data > temp->data ||  node->data == temp1->data) node = temp1;
                    
                    else {
                        return(0);
                    }
                }
        } //while
        }
    }
    return(1);
    
}