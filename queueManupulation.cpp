#include<iostream>
using namespace std;

class MyQueue{
    private:
        int front;
        int rear;
        int *p;
        int capacity;
    
    public:
        MyQueue(int c = 10){
            rear = 0;
            front = 0;
            p = new int[capacity];
            capacity = c;
        }
        bool isFull();
        bool isEmpty();

        void treverse();
        void enque(int);
        void deque();
};

int main(){
    int ch,item;
    MyQueue a(10);

    while (1)
    {
        cout<<"0) Exit 1) Travers/see 2) Enqueue/add 3) Dequeue/remove"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 0:
                return 0;
                break;

            case 1:
                a.treverse();
                break;
            
            case 2:
                cout<<"Enter a value to push: ";
                cin>>item;
                a.enque(item);
                break;
            
            case 3:
                a.deque();
                break;
            
            default:
                cout<<"Wront input"<<endl;
                break;
        }
    }
}

bool MyQueue :: isEmpty(){
    return front == rear;
}

bool MyQueue :: isFull(){
    return rear == capacity;
}

void MyQueue :: treverse(){
    if(isEmpty()){
        cout<<"Empty queue"<<endl;
    }
    else{
        for(int i=front;i<rear;i++){
            cout<<"Value in "<<i+1<< " is "<<p[i]<<endl;
        }
    }
}

void MyQueue :: enque(int value){
    if(isFull()){
        cout<<"Overflow!"<<endl;
    }
    else{
        p[rear] = value;
        rear++;
    }
}

void MyQueue :: deque(){
    if(isEmpty()){
        cout<<"Queue is empty!";
    }
    else{
        front ++;
    }
}