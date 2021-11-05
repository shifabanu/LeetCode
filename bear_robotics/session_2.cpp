Design and implement an abstract data structure called Pool that can be used to implement various OS job schedulers.



# P.1 : Implement a data structure with the following operations:



#  1) insert(val: int) : Inserts an integer value 'val' into data structure even  if the val already inserted.

#  2) remove() -> int : Retrieve an element from the data structure and remove  it. This could be any element. If there is multiple elements with the same value,  only one will be removed





P2. Same problem as before, but no duplicate is allowed. We know in advance the range of integers is [0.. N] where N is a constance and is small enough. N for instance, could be == 100.
  
  #include <iostream>
using namespace std;


int main() {
  cout << foo(2+2);
  Stack s;
  return 0;
}

void p1_insert(Stack& S, int number)
{
  S.push_back(number);
}

int p1_remove(Stack& S)
{
  if (S.empty())
    throw "Empty";

  int tmp = S.top();
  S.pop_back();
  return tmp;
}

// vector<int> v;
// vector<int>, push_back, pop_back, operator[], last
#define N 100
int elements[N] = {0};
// [0, 0, 0, 0,...., 0]
void p2_insert(int number)
{
  if(elements[number-1]!=1)
  {
    v.push_back(number);
    elements[number-1] = 1;
  }
}

int p2_remove(vector<int>& v)
{
  if (v.empty())
    throw "Empty";

  int tmp = v.top();
  v.pop_back();
  elements[tmp-1] = 0;
  return tmp;
}
