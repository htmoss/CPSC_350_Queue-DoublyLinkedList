#include <iostream>
#include"ListNode.h"
using namespace std;

class DoublyLL
{
private:
	ListNode * front;
	ListNode * back;
	int times;
public:
	DoublyLL();
	~DoublyLL();
	void insert(node *& head);
	void deleteN(node *& head, int time);
	void displayLtoR(node *& head);
	void displayRtoL(node *& head);
};
