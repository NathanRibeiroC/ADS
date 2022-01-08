class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Solution:
    def removeNthFromEnd(head, n):
        fast, slow = head, head
        for _ in range(n): fast = fast.next
        if not fast: return head.next
        while fast.next: fast, slow = fast.next, slow.next
        slow.next = slow.next.next
        return head

def show_from_here(node):
    while node:
        a = node
        print(a.data,'-->',end='')
        node = node.next
    print('None')

n1 = node(1)
n2 = node(2)
n1.next = n2
n3 = node(3)
n2.next = n3
n4 = node(4)
n3.next = n4
n5 = node(5)
n4.next = n5

nn = Solution.removeNthFromEnd(n1,1)

show_from_here(nn)