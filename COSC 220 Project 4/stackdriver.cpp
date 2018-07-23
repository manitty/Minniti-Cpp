//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7

#include <iostream>
#include "stack.h"
using namespace std;

int main(){
 
   MyStack<int>  S;
   MyStack<int> X;
   
   for(int i=5; i>=1; i--){
     S.Push(i);
     cout << S.TopStack();
   }
   
   for(int i=5; i>=1; i--){
     X.Pop(i);
     cout << X.TopStack();
   }
  
    S.IsEmpty();
    
    S.IsFull();
    
  
  
}