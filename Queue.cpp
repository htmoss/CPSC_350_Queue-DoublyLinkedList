#include "DoublyLL.h"

struct node
{
	int time;
	struct node* next;
};

class Queue{

    private:

        node *front;

        node *back;

    public:

        Queue();

        void enqueue();

        void dequeue();

        void display();

};

Queue::Queue(){

    front = NULL;

    back = NULL;

}

void Queue::enqueue(){

    int data;

    node *temp = new node;

    cout<<"Enter the data to enqueue: ";

    cin>>data;

    temp->times = data;

    temp->next = NULL;

    if(front == NULL){

        front = temp;

    }else{

        back->next = temp;

    }

    back = temp;

}

void Queue::dequeue(){

    node *temp = new node;

    if(front == NULL){

        cout<<"\nQueue is Emtpty\n";

    }else{

        temp = front;

        front = front->next;

        cout<<"The data Dequeued is "<<temp->times;

        delete temp;

    }

}

void Queue::display(){

    node *p = new node;

    p = front;

    if(front == NULL){

        cout<<"\nNothing to Display\n";

    }else{

        while(p!=NULL){

            cout<<endl<<p->times;

            p = p->next;

        }

    }

}