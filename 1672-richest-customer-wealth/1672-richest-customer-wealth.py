class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxi=-1
        for i in range(len(accounts)):
            sum=0
            for j in range(len(accounts[i])):
                sum+=accounts[i][j]
            maxi=max(maxi, sum)
        return maxi