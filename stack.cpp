#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    private:

    T* arr;
    int top;
    int size;
    
    public:

    Stack(){
        arr=new T[1000];
        top=-1;
        size=1000;

    }
    void push(T data){
        if(top==size-1){
            cout<<"stack is Full\n";
            return;

        
        }
        top++;
        arr[top]=data;
    }
       T topMost(){
           if (top==-1){
               cout<<" Stack is empty\n";
               return NULL;
           }
           
            return arr[top];
        }
            T pop(){
                if(top ==-1){
                    cout<<"stack is empty\n";
                    return NULL;

                }
                T deleted=arr[top];
                top--;
                return deleted;

            }
        };

int main(){
    Stack<string> st;
    st.push("jeenesh");
    st.push("harsha");
    st.push("lokesh");
    st.push("ragini");
    st.push("shiva");
    cout<<st.pop()<<"\n";
    cout<<st.pop()<<"\n";
    cout<<st.topMost()<<"\n";
    cout<<st.pop()<<"\n";
    st.push("simaran");
    cout<<st.topMost()<<"\n";
    cout<<st.pop()<<"\n";
    cout<<st.pop()<<"\n";

    return 0;

}