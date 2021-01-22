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
class Queue{
  Node<T> *head;
  Node<T> *tail;
  int size;
  public:
  Queue(){
      size=0;
      head=NULL;
      tail=NULL;
  }
  int getSize(){
      return size;
  }
  bool isEmpty(){
      return size==0;
  }
  void enqueue(T element){
      Node<T> *newNode=new Node<T>(element);
      if(head==NULL){
          head=newNode;
          tail=newNode;
          size++;
      }
      else{
          tail->next=newNode;
          tail=newNode;
          size++;
      }
  }
  T front(){
      if(isEmpty()){
          cout<<"Queue empty"<<endl;
          return 0;
      }
      return head->data;
  }
  T dequeue(){
      if(isEmpty()){
          cout<<"Queue empty"<<endl;
          return 0;
      }
      Node<T> *curr=head;
      T value=head->data;
      head=head->next;
      delete curr;
      size--;
     /* if(size==0){
          head=NULL;
          tail=NULL;
      }*/
      return value;
      
  }
  
};

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}