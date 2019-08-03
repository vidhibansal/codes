void removeTheLoop(Node *head)
{
    map<Node *,int> m;
    Node * temp=head;
    Node * prev;
    int c;
    if (head->next == head)
    {
        head->next = NULL;
    }
    else{
    while(1)
    {
        if (m.find(temp) == m.end())
        {
            c=0;
            m.insert(pair<Node *,int>(temp,c));
        }
        else 
        {
            c = m[temp];
            prev->next = NULL;
            break;
        }
        prev = temp;
        temp = temp->next;
        if (temp->next == NULL)
        break;
    }
    }
    
     //Your code here
     
}
