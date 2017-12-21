#include "DoublyLL.h"
#include "Queue.cpp"

int main()
{
	Queue q;
	q.Enqueue(2);
	q.Print();
	q.Enqueue(4);
	q.Print();
	q.Enqueue(6);
	q.Print();
	q.Dequeue();
	q.Print();
	q.Enqueue(8);
	q.Print();

	return 0;
}
