class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Solution:
    def reverseList(self, head):
        prev = None
        while head:
            curr = head
            head = head.next
            curr.next = prev
            prev = curr
        return prev

n1 = node()
n1.data = 1
n2 = node()
n2.data = 2
n1.next = n2
n3 = node()
n3.data = 3
n2.next = n3

s = Solution()
n4 = s.reverseList(n1)
print(n4.data,'-->',n4.next.data,'-->',n4.next.next.data)
