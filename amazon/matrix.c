
Search for a value in a m x n matrix

Example:

05  07  01  03
11  16  10  20
27  26  23  29
35  37  33  31

// num =39
// if the matrix is sorted

bool search_value(int num, int arr[4][4])
{
    //rows
    for(int i=0; i<4; i++)
    {
       //cols
       for(int j=0; j<4; j++)
       {
           //compare
           if(num==arr[i][j])
           {
               return true;
           }
          
       }
       
    }
    return false;
}

// 29/10=2
//row =2 then go to different cols and check

bool search_value(int num, int arr[4][4])
{
    //39
    int row = num/10;
    //row = 3
    
    if(row>4)
    {
        return false;
    }
    //cols
    else
    {
        for(int j=0; j<4; j++)
        {
            if(num==arr[row][j])
            {
               return true;
            }
        }
    }
    
    return false
}


Sorted :
01  03  05  07
10  11  16  20
23  29  30  34
40  41  45  47

num=30
i=0 to 4
j=4 to 0

if arr[i][j] < num 
    i++
else 
while(i<j)
{
    j--
    arr[i][j]
    if num== arr[i][j]
        return true
}
return false
