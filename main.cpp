#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

bool exists(vector<int> avl_tree, int number)
{
  int i = 0;
    while(i<=avl_tree.size())
    {
        int left = 2*i+1;
        int right = 2*i+2;

        if(avl_tree[i]==number)
        {
            return true;
        }
        if(avl_tree[i]<number)
        {
            i= right;
        }
        if(avl_tree[i]>number)
        {
            i = left;
        }
    }
    i = 0;
    while(i<=avl_tree.size())
    {
        if(avl_tree[i]== number){
            return true;
        }
        i++;
    }
    return false;
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  return NULL;
}

int main ()
{
  test();
  return 0;
}






