#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
};

class LL{
    private:
        node *head;

    public:
        LL(){
            head = NULL;
        }

        void show();
        node * createNode(int);
        node * insertNode(node*, node*);
};

node* LL::createNode(int value){
    node *newNode = new node;
    newNode -> data = value;
    newNode -> next = NULL;
    return newNode;
}

node * LL::insertNode(node * newNode, node * prev = NULL){
    if(prev == NULL){
        newNode->next = head;
        head = newNode;
    }
    else{
        newNode->next = prev->next;
        prev->next = newNode;
    }
    return newNode;
}

void LL::show(){
    node * curr = head;
    while(curr != NULL)
    {
        cout<<"["<<curr->data<<","<<curr->next<<"]";
        if(curr->next)cout<<"-->";
        curr = curr->next;
    }
    cout<<"\n\n";
}

int main(){

    int n,elem,i;
    LL myList;
    node * myNode;

    cout<<"How many elements? ";
    cin>>n;
    node *p=NULL,*tmp;
    for(i=0; i<n; i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>elem;
        myNode = myList.createNode(elem);
        p = myList.insertNode(myNode,p);
    }
    myList.show();
    

}