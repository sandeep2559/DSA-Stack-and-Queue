#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data=data;
        next=NULL;
    }
    
};
template<typename T>
class Stack{
    int size;
    Node<T> *head;
     public:
          Stack(){
              head=NULL;
              size=0;
          }
          int getSize(){
              return size;
          }
          bool isEmpty(){
              return size==0;
          }
          void push(T element){
             Node<T> *newNode=new Node<T>(element);
             newNode->next=head;
             head=newNode;
             size++;

          }
          T pop(){
              if(isEmpty()){
                  return 0;
              }
              Node<T> *temp=head;
              T x=temp->data;
              head=head->next;
              delete temp;
              size--;
              return x;
          }
          T top(){
              if(isEmpty()){
                  return 0;
              }
              return head->data;
          }
};
 int main(){
     Stack<char> s;
     s.push(65);
     s.push(66);
     s.push(67);
     s.push(68);
     s.push(69);
     s.push(70);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
     cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
 }