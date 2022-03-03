class Solution {
    vector<int> ans;
public:
    vector<int> reversePrint(ListNode* head) {
    if(head == nullptr)
    {
        return ans;
    }
    
      while(head)
      {
        ans.push_back(head->val);
        head=head->next;
      }
      std::vector<int>::iterator first= ans.begin();
      std::vector<int>::iterator end = ans.end()-1;
      while(first < end)
      {
          swap(*first,*end);
          first++;
          end--;
      }
      return ans;
    }
};