class Solution {
    vector<int> ans;
public:
    vector<int> reversePrint(ListNode* head) {

      while(head!=NULL)
      {
        ans.push_back(head->val);
        head=head->next;
      }
      int end=ans.size()-1;
      int first=0;
      while(end>first)
      {
          swap(ans[end],ans[first]);
          end--;
          first++;
      }
      return ans;
    }
};
