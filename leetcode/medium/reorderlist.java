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
    void reorderList(ListNode* head) {
        if(head == NULL||head->next == NULL)
            return;
        
        stack<ListNode*> st;
        ListNode *node=head;
        while(node!=NULL){
            st.push(node);
         node=node->next;
        }
        node=head;
        ListNode* pop=NULL;
        int i=1;
        int size=st.size();
        while(i<=size/2){
            ListNode* next=node->next;
            pop=st.top();st.pop();
            node->next=pop;
            pop->next=next;
            node=next;
            i++;
            }
        if(size/2==0)
            pop->next=NULL;
        else
            node->next=NULL;
    
    }
};
