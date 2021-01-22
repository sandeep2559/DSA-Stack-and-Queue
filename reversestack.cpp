#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int> p){
    
}

int main(){
    stack<int> p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push(x);
    }
    reverseStack(p);
}