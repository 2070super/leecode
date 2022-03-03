class Solution {
    vector<int> ans;
public:
    vector<int> reversePrint(ListNode* head) {
      while(head)
      {
        ans.push_back(head->val);
        head=head->next;
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};