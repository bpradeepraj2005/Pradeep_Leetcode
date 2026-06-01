class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        ans=0
        for i in range(len(nums)):
            cnt=0
            while(nums[i]>0):
                a=nums[i]%10
                cnt+=1
                nums[i]=nums[i]//10
            if(cnt%2==0):
                ans+=1

        return ans
