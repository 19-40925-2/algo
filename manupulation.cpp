#include<iostream>
using namespace std;

class A{
    private:
        int noOfElements;
        int capacity;
        int *p;
    
    public: 
        A(int c = 10){
            noOfElements = 0;
            capacity = c;
            p = new int [c];
        }

    void traverse();
    void insertion(int, int);
    void deleteByPosition(int);
    void deleteByValue(int);
    int searching(int);

    bool isEmpty();
    bool isFull();
};

int main(){
    A myArray(5);

    int option, item, pos;

    while(1){
        cout<<"0)Exit\t1)Insert\t2)Delete Position\t3) Delete Value\n";
        cout<<"4)Traverse\t5)Search\n";
        cout<<"Enter Option:";
        cin>>option;
        
        // to do selected operation from the above
        switch(option){
            case 0:
                return 0;
            case 1://insertion
                // cout<<"Enter value and position(index): ";
                // cin>>item>>pos;
                // myArray.insertion(item,pos);

                cout<<"Enter Value: ";
                cin>>item;
                cout<<"Enter Position: ";
                cin>>pos;
                myArray.insertion(item,pos);


                break;
            case 2://Delete by Position
                /* COMPLETE IT YOURSELF*/
                // cout<<"Enter Position you want to delete: ";
                // cin>>pos;
                // /*take input from user and call appropriate function*/
                // myArray.deleteByPosition(pos);

                break;
            case 3://Delete by Value
                /* COMPLETE IT YOURSELF*/
                /*take input from user and call appropriate function*/
                // cout<<"Enter The Value you want to delete: ";
                // cin>>item;
                // myArray.deleteByValue(item);

                break;
            case 4:
                myArray.traverse();

                break;
            case 5: // Searching
                /* COMPLETE IT YOURSELF*/
                /*take input from user and call appropriate function*/
                // cout<<"Enter Which element you want to search: ";
                // cin>>item;
                // myArray.searching(item);
                break;
            default:
                cout<<"\nWrong option!!!\n\n";
        }
    }

    return 0;
}

bool A::isEmpty(){
    return noOfElements == 0;
}

bool A::isFull(){
    return noOfElements == capacity;
}

void A :: insertion (int v, int position){
    if(isFull()){
        cout<<"Array is full! Can't insert"<<endl;
        return;
    }
    else if(position<0 || position > capacity){
        cout<<"Invalid position!"<<endl;
        return;
    }
    else{
        for(int i = noOfElements - 1; i>= position; i--){
            p[i+1] = p[i];
        }

        p[position] = v;

        noOfElements++;
    }
}

void A::traverse(){
    if(isEmpty())cout<<"\nArray is EMPTY!\n";
    for(int i=0; i< noOfElements; i++){
        cout<<p[i] << " ";
    }
    cout<<endl;
}