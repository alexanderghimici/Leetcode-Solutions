struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* prev = head;
        ListNode* current = head->next;
        int currentVal = head->val;
        while (current) {
            if (currentVal == current->val) {
                ListNode* temp = current;
                current = current->next;
                prev->next = current;
                delete temp;
            } else {
                currentVal = current->val;
                prev = current;
                current = current->next;
            }

            
        }
        return head;
    }
};