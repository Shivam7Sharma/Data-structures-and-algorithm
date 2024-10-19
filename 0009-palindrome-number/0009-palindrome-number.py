class Solution:
    def isPalindrome(self, x: int) -> bool:
        reverse=0
        temp=x

        while temp>0:
            remainder= temp%10
            reverse= reverse*10 + remainder
            print(reverse)
            temp=int(temp/10)

        return reverse==x
        