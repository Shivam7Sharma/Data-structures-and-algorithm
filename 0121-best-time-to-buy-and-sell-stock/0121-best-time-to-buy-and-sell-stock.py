class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        dip=float(inf)
        maxprofit=0
        for x in prices:
            if x< dip:
                dip=x
            if x-dip>maxprofit:
                maxprofit= x-dip

        return maxprofit
        