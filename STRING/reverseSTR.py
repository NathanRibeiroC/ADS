class Solution:
    def reverse(s):
        for i in range(int(len(s)/2)):
            s[i],s[len(s)-i-1]=s[len(s)-i-1],s[i]

string = ['B','r','a','s','i','l']

Solution.reverse(string)

print(string)


