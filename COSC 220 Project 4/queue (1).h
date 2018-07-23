//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7

    #ifndef QUEUE_H

    #include QUEUE_H

     

     

    template <typename T>

    class Queue

    {

    private:
               list<T> qList;

         

    public:

       Queue(); //class constructor - create empty queue

       void enqueue(const T& item); //add an item to the back of the queue

       DataType dequeue(); //remove the first item from the queue and return its value

       DataType first() const; //return the value of the first item in the queue

       bool IsEmpty() const; //returns true if there are no elements in the queue

    };

    #include "Queue.cpp" 

    #endif
