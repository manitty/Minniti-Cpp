//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7

#include "stack.h"

template <typename T>
MyStack::MyStack(int)
{
  return vStack.size():
}

MyStack::~MyStack()
{
  delete;
  return 0;
}

bool MyStack::IsEmpty() const
{
  return vStack.empty();
}

bool MyStack::IsFull() const
{
  if(vStack.empty() != true){
    vStack.empty() = false;
    return vStack.empty();
}

T MyStack::Pop()
{
vStack.pop_front(item);
}

void MyStack::PrintStack() const
{

}

void MyStack::Push(const T& item)
{
vStack.push_back(item);
}

T MyStack::TopStack() const
{
return vStack.back();
}
