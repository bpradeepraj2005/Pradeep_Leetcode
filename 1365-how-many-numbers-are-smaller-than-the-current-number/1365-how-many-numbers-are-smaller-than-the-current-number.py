class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        li=[]
        for i in range(len(nums)):
            cnt=0
            for j in range(len(nums)):
                if(nums[i]>nums[j]): cnt+=1
            li.append(cnt)

        return li