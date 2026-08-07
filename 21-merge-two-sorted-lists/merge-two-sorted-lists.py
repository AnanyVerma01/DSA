# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        new_head = ListNode(100)
        i,j,temp = list1,list2,new_head

        while i!=None and j!=None:
            if i.val<=j.val: 
                temp.next = i
                i=i.next
            else:
                temp.next = j
                j=j.next
            
            temp=temp.next

            
        while i!=None:
            temp.next = i
            temp=temp.next
            i=i.next

        while j!=None:
            temp.next = j
            temp=temp.next
            j=j.next
        
        return new_head.next
        