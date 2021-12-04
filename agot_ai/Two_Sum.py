class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # iterate over list take the target for comparison
        # store the index in an output array
        # store the diff in another variable
        # iterate over the other elements and check if the diff is there in the given list
        
        output: List[int] = [] #index only
        
        for i in range(0, len(nums)):
            diff= target - nums[i]
            for j in range(i+1, len(nums)):
                if(nums[j]==diff):
                    output.append(i)
                    output.append(j)
                    return output
                    
                    
            
        
