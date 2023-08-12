#include<iostream>
using namespace std;

class MyStake{
    private:
        int capacity;
        int top;
        int *p;
    public:
        MyStake(int c = 10){
            top = 0;
            capacity = c;
            p = new int [capacity];
        }
        bool isEmpty();
        bool isFull();

        void push(int);
        void pop();
        void treverse();
};

int main(){
    int choise, value;
    MyStake a(10);

    while(1){
        cout<<"0) Exit 1) Push 2) Pop 3) Traverse"<<endl;
        cin>>choise;

        switch (choise)
        {
        case 0:
            return 0;
            break;

        case 1:
            cout<<"Enter a value to push";
            cin>>value;
            a.push(value);
            break;
        
        case 2:
            a.pop();
            break;

        case 3:
            a.treverse();
            break;
        
        
        default:
            break;
        }
    }
}

bool MyStake :: isEmpty(){
    return top == 0;
}

bool MyStake :: isFull(){
    return top == capacity;
}

void MyStake :: push(int value){
    if(isFull()){
        cout<<"Full stake "<<endl;
    }
    else{
        p[top] = value;
        top++;
    }
}

void MyStake :: pop(){
    p[top] = 0;
    top--;
}

void MyStake :: treverse(){
    if(isEmpty())
        cout<<"empty"<<endl;
    else{
        for(int i = 0; i<top; i++){
            cout<<"I value : "<<i<<" and value is: "<<p[i]<<endl;
        }
    }
}