class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Solution:
    def sum_4_digit(l1,l2):
        aux_l1 = ""
        aux_l2 = ""
        while l1:
            aux_l1 = aux_l1 + str(l1.data)
            l1 = l1.next
        while l2:
            aux_l2 = aux_l2 + str(l2.data)
            l2 = l2.next
        return int(aux_l1)+int(aux_l2)

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

print(Solution.sum_4_digit(n1,n4))
