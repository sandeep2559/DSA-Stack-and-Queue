#include<iostream>
#include<climits>
using namespace std;

template<typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
     public:
           StackUsingArray(){
               data=new T[4];
               nextIndex=0;
               capacity=4;
           }
           int size(){
               return nextIndex;
           }
           bool isEmpty(){
               return nextIndex==0;
           }
           void push(T element){
              /* if(nextIndex==capacity){
                   cout<<"Stack full"<<endl;
                   return;
               }*/
               if(nextIndex==capacity){
                   T *newData=new T[capacity*2];
                   for(int i=0;i<capacity;i++){
                       newData[i]=data[i];
                   }
                   delete []data;
                   data=newData;
                   capacity*=2;
               }
               data[nextIndex]=element;
               nextIndex++;
           }
           T pop(){
               if(nextIndex==0){
                   cout<<"Stack empty"<<endl;
                   return 0;
               }
               nextIndex--;
               return data[nextIndex];

           }
           T top(){
              if(isEmpty()){
                   cout<<"Stack empty"<<endl;
                   return 0;
               }
               return data[nextIndex-1];
           }
};

int main(){
    StackUsingArray<char> s;
    s.push(97);
    s.push(98);
    s.push(99);
    s.push(100);
    s.push(101);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
      cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;

    
}