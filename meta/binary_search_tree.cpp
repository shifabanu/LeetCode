/* p1:
Binary search tree

bst1:
          5
   2.           6
1.    3
         4
         
bst2:

        4
    2.        5
 1.    3          6
 
 Problem:
 Write a function:
 parameters are two arbitrary bsts
 output: boolean to tell if two bsts are the same bst or not
 
 Two bsts are the same:
 1. Number of nodes are the same X
 2. Values are the same. X
 
 Assumption:
 1. No duplication in one bst
 2. All bsts are valid 
 
 
 Node{
  Node left;
  Node right;
  Int value;
 
 } */
 
int min(Node head_node)
{
  int min = head_node.value;
  int *next = head_node.left;
  while(next!=\0)
  {
    if(min<*next.value)
    {
      min=*next.value;
      next=next.left;
    }
    
  }
  return min;
  
}

int max(Node head_node)
{
  int max = head_node.value;
  int *next = head_node.right;
  while(next!=\0)
  {
    if(min<*next.value)
    {
      min=*next.value;
      next=next.right;
    }
    
  }
  return max;
  
}
 
bool equal_or_not(Node head_node1, Node head_node2)
{
  // min in the tree
  int min1 = min(head_node1); //for tree1
  int min2 = min(head_node2); //for tree2
    
  int max1 = max(head_node1); //for tree1
  int max2 = max(head_node2); //for tree2
  
  int flag1[max1] =
  
  if(min1==min2 && max1==max2)
  {
    // other search
    
    
    
  }
  else
  {
    return false;
  }
    
  
}
