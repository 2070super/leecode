struct ListNode* deleteDuplicates(struct ListNode* head){
if(!head)
{
    return head;
}
struct ListNode *n=head;
while (n->next)
{
    if(n->val==n->next->val)
    {
        n->next=n->next->next;
    }
    else
    n=n->next;
}
return head;
}