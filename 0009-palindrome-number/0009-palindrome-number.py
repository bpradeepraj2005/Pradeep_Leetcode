class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        else:
            ans=0
            m=x
            while(m>0):
                a=m%10
                ans=(ans*10)+a
                m=m//10
            print(ans)
            if(x==ans):
                return True
        return False