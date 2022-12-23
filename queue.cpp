#include<bits/stdc++.h>
using namespace std;
template <class T>
class Queue{
    private:
    int size;
    int front;
    int rear;
    T* arr;
    int arrSize=1000;
    public:
    Queue(){
        size=0;
        front=-1;
        rear=-1;
        arr=new T[1000];

    }
    void enqueue(T element){
        if (rear==arrSize-1){
            cout<<"Your Queue is Filled\n";

        }
        rear++;
        arr[rear]=element;

            }
            T dequeue(){
                if(front==rear){
                    cout<<" Your Queue is Empty";
                    return NULL;
                }
                front++;
                return arr[front];
            }
            T frontElem(){
                if(front == rear){
                    cout<<"your queue is empty\n";
                    return NULL;
                }
                return arr[front+1];
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