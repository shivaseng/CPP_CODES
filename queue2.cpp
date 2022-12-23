#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
    private:
    T data;
    Node<T>* next;
    public:
    Node(T data){
        this->data=data;
        next=NULL;

    }
};
template <class T>
class Queue{
    private:
    Node<T>* front;
    Node<T>* rear;
    int size;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
        size=0;

    }
    void enqueue(T data){
        Node<T>* ptr=new Node<T>(data);
        if(rear == NULL){
            front=ptr;
            rear=ptr;

        }else{
            rear->next=ptr;
            rear=rear->next;

        }
    }
    T dequeue(){
        if(front == NULL){
            cout<<"queue is empty\n";
            return NULL;
        }
        Node<T>* temp = front;
        front=front->next;
        T deleted = temp->data;
        delete(temp);
        if(front == NULL){
            rear = NULL;

        }
        size--;
        return deleted;

    }
    T frontElem(){
        if(front ==  NULL){
            cout<<"Queue Is Empty\n";
            return NULL;

        }
        return front->data;
    }


};
int main(){
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(7);
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    q.enqueue(10);
    q.enqueue(11);
    cout<<q.frontElem()<<"\n";
    cout<<q.dequeue()<<"\n";
    return 0;
}