'''



'''

def binaryToDecimal(binary):
     
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    #print(decimal)
    return decimal

def solution(S):
    decimal = binaryToDecimal(int(S))
    count = 0
    while(decimal!=0):
        if(decimal//2==0):
            decimal=decimal%2
            count++
        else:
            decimal--
            count++
            
    return count
            
            
            
