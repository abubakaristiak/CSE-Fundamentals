/*
Node *tmp = head;
for (int i = 1; i <= pos - 1; i++)
{
    tmp = tmp->next;
}
Node *deleteNode = tmp->next;
tmp->next = tmp->next->next;
delete deleteNode;

answer: Delete a node from any position
*/