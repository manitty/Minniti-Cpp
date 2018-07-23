//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7

#include <iostream>
#include "queue.h"
using namespace std;

int main(){
 
   Queue<int> S;
   
   
   for(int i=5; i>=1; i--){
      S.enqueue(i);
   }
 
    S.first();
 
   for(int i=5; i >= 1; i--){
   S.dequeue(i)
   }
  
  S.IsEmpty();
 
}