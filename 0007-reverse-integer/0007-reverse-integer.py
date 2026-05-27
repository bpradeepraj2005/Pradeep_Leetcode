class Solution:
    def reverse(self, x: int) -> int:
        ans=0
        m=x
        if m>=0:
            while(m>0):
                a=m%10
                ans=(ans*10)+a
                m=m//10
            #print(ans)
            if(-2**31 <=ans and ans<=2**31 -1): return ans
            return 0
        else:
            m=-m
            while(m>0):
                a=m%10
                ans=(ans*10)+a
                m=m//10
            #print(ans)
            if(-2**31 <=ans and ans<=2**31 -1): return -ans
            return 0
