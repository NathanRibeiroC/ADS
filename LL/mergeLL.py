class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Solution:
    def merge(l1,l2):
        aux = node(0)
        dummy = l1
        while l1:
            aux = l1
            l1 = l1.next
        aux.next = l2
        return dummy

def show(l):
    while l:
        print(l.data,'-->',end="")
        l = l.next
    print('--> None')
    
n1 = node(1)
n2 = node(2)
n1.next = n2
n3 = node(3)
n2.next = n3

n4 = node(1)
n5 = node(2)
n4.next = n5
n6 = node(3)
n5.next = n6

l = Solution.merge(n1,n4)
show(l)
