class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        elif(x==0):
            return True
        else:
            reverse = 0 
            divi = x
            while(divi!=0):
                rem = divi%10
                reverse = reverse*10 + rem
                divi = divi//10
            
            if(reverse==x):
                return True
            else:
                return False
            
            
        
