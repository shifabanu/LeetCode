"""
    Switch case in python3
    It is dictionary datatype
    It maps key:value
    .get() will give the value if the key 
    is found o/w it will give the default value
    
"""

def romantonum(character :str) -> int:
    switcher = {
            I : 1,
            V : 5,
            X : 10,
            L : 50,
            C : 100,
            D : 500,
            M : 1000,
        }
    return switcher.get(character, "N/A")

def romanToInt(s: str) -> int:
    i = 0
    result = 0
    length = len(s)
    while(i<length):
        if(i==length-1):
            result = result + romantonum(s[i])
            return result
        
        curr = romantonum(s[i])
        after = romantonum(s[i+1])
        
        if(curr>=after):
            result = result + curr
            i=i+1
        else:
            result = result + (after-curr)
            i=i+2
    return result
        
        
    


        
