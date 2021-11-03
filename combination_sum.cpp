/******************************************************************************

Combination Sum
Medium

Given an array of distinct integers candidates and a target integer target, 
return a list of all unique combinations of candidates where the chosen numbers 
sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen 
numbers is different.

It is guaranteed that the number of unique combinations that sum up to target 
is less than 150 combinations for the given input.

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Input: candidates = [2], target = 1
Output: []

Input: candidates = [1], target = 1
Output: [[1]]

Input: candidates = [1], target = 2
Output: [[1,1]]

*******************************************************************************/

/*#############################################################################
LOGIC BEHIND THE SOLUTION
Recursion and Backtracking

Step 1: Create a function that takes the vector/array and sum that
        returns vector<vector<int>> result

Step 2: Sort the vector/array using .sort(.begin(), .end())

Step 3: Remove any duplicates using .erase(unique(), .end())

Step 4: Create a temporary array to save one combination and later can be 
        appended/pushed back to the result.
        
Step 5: Create and call another void findSum function inside to pass arr, sum, 
        res, r, 0.
        0 here is the value of i for first iteration.

Step 6: Function is called
    Step 6.1: if sum == 0 then we will push_back the contents in r (it will be 
            an array) to the result vector. Then we will return to the caller function.
        
    Step 6.2: We will create a while loop that will check if the i < arr.size()
            && sum - arr[i] >=0. The sum value should be non-negative only otherwise
            it is ignored
    Step 6.3: Push_back the arr[i] in r and call the findSum fucntion again (Recursion).
            But now pass parameters like (arr, sum-arr[i], res, r, i)
            Whenever, the function returns to this caller function we will do:
            i++
            pop_back the last value from r. (Backtracking)
    
        

website: https://www.geeksforgeeks.org/combinational-sum/

##############################################################################*/
