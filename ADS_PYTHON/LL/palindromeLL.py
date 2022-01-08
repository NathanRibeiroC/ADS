class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Solution:
    def isPalindrome(head) -> bool:
        res = []
        
        while head:
            res.append(head.data)
            head = head.next

        for i in range(len(res)):
            if(res[i]==res[len(res)-1-i]):
                pass
            else:
                return False
        return True

n1 = node(1)
n2 = node(2)
n1.next = n2
n3 = node(3)
n2.next = n3

print(Solution.isPalindrome(n1))

