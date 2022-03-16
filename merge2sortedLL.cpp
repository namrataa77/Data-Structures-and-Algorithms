/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
          } else if (list2 == nullptr) {
            return list1;
          }
        
    ListNode* mergedHead = nullptr;
  if (list1->val <= list2->val) {
    mergedHead = list1;
    list1 = list1->next;
  } else {
    mergedHead = list2;
    list2 = list2->next;
  }
        ListNode* mergedTail = mergedHead;
  
  while (list1 != nullptr && list2 != nullptr) {
    ListNode* temp = nullptr;
    if (list1->val <= list2->val) {
      temp = list1;
      list1 = list1->next;
    } else {
      temp = list2;
      list2 = list2->next;
    }

    mergedTail->next = temp;
    mergedTail = temp;
  }

  if (list1 != nullptr) {
    mergedTail->next = list1;
  } else if (list2 != nullptr) {
    mergedTail->next = list2;
  }

  return mergedHead;
}

    };
    
    
