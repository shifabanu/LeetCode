/******************************************************************************
Check if edit distance between two strings is one
Difficulty Level : Medium
An edit between two strings is one of the following changes. 
 

Add a character
Delete a character
Change a character


Given two string s1 and s2, find if s1 can be converted to s2 with exactly one 
edit.


Input:  s1 = "geeks", s2 = "geek"
Output: yes
Number of edits is 1

Input:  s1 = "geeks", s2 = "geeks"
Output: no
Number of edits is 0

Input:  s1 = "geaks", s2 = "geeks"
Output: yes
Number of edits is 1

Input:  s1 = "peaks", s2 = "geeks"
Output: no
Number of edits is 2


Logic:

Step 1: Find the string length of both strings.
Step 2: If m=n. 
        Check the s1[0], s2[0], s1[m-1], s2[n-1] if they are equal. 
            If equal
                Count=0 
                for 1 to m-2 
                    if character1 != character2
                        Count++
                            if Count > 1
                                return No
                if Count == 1
                    return Yes
                else 
                    return No
            
Step 3: else 
            if abs(m-n) > 1
                return No
            
            Count=0, i=0, j=0
            while(i<m && j<n )
                if (s1[i+1] == "\0" || s2[j+1] == "\0")
                        if Count == 0
                            return Yes
                        else
                            return No
                if s1[i] != s2[j]
                    count++
                
                i++, j++
                
                if count>1 
                    return No

                    
            
                

*******************************************************************************/

/*#include <stdio.h>
#include <string.h> // string datatype
#include <stdbool.h> // using bool functions/variables
#include <stdlib.h> // abs()*/

#include <bits/stdc++.h>
using namespace std;

bool edit_distance(string s1, string s2)
{
    int m=0, n=0, count=0;
    m = s1.length();
    n = s2.length();
    
    if(m=n)
    {
       if(s1[0] == s2[0] && s1[m-1] == s2[n-1])
       {
           for(int i=1; i<m-1; i++)
           {
               if (s1[i] != s2[i])
               {
                   count++;
                   if(count>1)
                   {
                       return 0;
                   }
               }
           }
           
           if(count==1)
           {
               return 1;
           }
           else
           {
               return 0;
           }
       }
       
       else
       {
         for(int i=0; i<m; i++)
           {
               if (s1[i] != s2[i])
               {
                   count++;
                   if(count>1)
                   {
                       return 0;
                   }
               }
           }
           if(count==1)
           {
               return 1;
           }
           else
           {
               return 0;
           }
       }
    }
    
    else
    {
      if(abs(m-n)>1)
      {
          return 0;
      }
      else
      {
        count=0;
        int i=0, j=0;
        
        while(i<m && j<n)
        {
            if(s1[i] != s2[j])
            {
                count++;
            }
            
            if(s1[i+1] == '\0' || s2[j+1] == '\0')
            {
                if(count == 0)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            
            i++;
            j++;
            
            if(count>1)
            {
                return 0;
            }
        }
      }
    }
 return false;
}

int main()
{
    bool c1 = edit_distance("shifa", "shifa"); // 0
    bool c2 = edit_distance("shifa", "shif"); // 1
    bool c3 = edit_distance("shifa", "sheefa"); // 0
    /*printf("c1: %b", c1);
    printf("c2: %b", c2);
    printf("c3: %b", c3);*/
    cout<< c1;
    cout<< c2;
    cout<< c3;
    return 0;
}
