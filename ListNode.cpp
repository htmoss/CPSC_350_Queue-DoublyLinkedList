#include "ListNode.h"
#include<iostream>
#include <string>
using namespace std;

ListNode::ListNode()
{

}

ListNode::ListNode(int t)
{
  times = t;
  next = NULL;
  prev = NULL;
}

ListNode::~ListNode()
{
  //research
  //null out the pointers
  cout<<"List node has been deleted"<<endl;
}
