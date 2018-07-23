//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7

#include "queue.h"


template <typename T>
DataType Queue::dequeue()
{
qList.pop_front();
return qList.front();
}

template <typename T>
void Queue::enqueue(const T& item)
{
qList.push_back)item);
}

template <typename T>
DataType Queue::first() const
{
return qList.front;
}

template <typename T>
bool Queue::IsEmpty() const
{
return qList.empty();
}

template <typename T>
Queue::Queue()
{
int q = 0;
}

