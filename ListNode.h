#include <string>
using namespace std;

class ListNode
{
  public:
    int times;
    ListNode* next;
    ListNode* prev;

    ListNode();
    ListNode(int times);
    ~ListNode();

};
