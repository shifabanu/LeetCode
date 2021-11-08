/******************************************************************************

Maximum profit
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Step 1: Find the least number in the array and its position/index
#### Can also find the maximum number and it's index and compare the indexes
Step 2: If the index is equal to the (len of array-1) then return max_profit=0
Step 3: max_profit = arr[index+1] - least number 
Step 4: Iterate from that j = (index+2) until the end of array.
    Step 4.1: if arr[j] - least number > max_profit then it will become the
    max_profit.
Step 5: return max_profit

*******************************************************************************/
#include <stdio.h>

int max_profit(int arr[], int n)
{
  int max=arr[0], min=arr[0], posi_max=0, posi_min=0, max_profit=0;
  
  for(int i=1; i<n; i++)
  {
    if(arr[i]>max)
    {
        max = arr[i];
        posi_max = i;
    }
    
    if(arr[i]<min)
    {
        min = arr[i];
        posi_min = i;
    }
  }
  
  if(posi_min==n-1)
  {
      return max_profit=0;
  }
  
  else if(posi_min<posi_max)
  {
    return max_profit=max-min;  
  }
  
  /*printf("max: %d", max);
  printf("\nmax position: %d", posi_max);
  printf("\nmin: %d", min);
  printf("\nmin position: %d", posi_min);*/
  
  else
  {
      max_profit = arr[posi_min+1] - min;
      int j = posi_min+2;
      for(j; j<n; j++)
      {
        if((arr[j]-min)>max_profit)
        {
            max_profit=arr[j]-min;
        }
      }
  }
  
  return max_profit;
  
  
}

int main()
{
    int arr[6] = {7,1,5,3,6,4}, max;
    max = max_profit(arr,6);
    printf("\nThe maximum profit will be: %d", max);

    return 0;
}

  
  
