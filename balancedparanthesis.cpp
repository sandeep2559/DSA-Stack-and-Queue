#include <iostream>
#include <string>
using namespace std;

#include<stack>
bool isBalanced(string expression) 
{
    stack<char> s;
    int n=expression.length();
    for(int i=0;i<n;i++){
        if(expression[i]=='(' || expression[i]=='{'){
            s.push(expression[i]);
        }
        else{
            if(s.size()==0){
                return false;
            }
            char ch=s.top();
            s.pop();
            if(ch=='(' && expression[i]==')'){
                continue;
            }
            else if(ch=='{' && expression[i]=='}'){
                continue;
}
            else{
                return false;
            }
        }
}
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}