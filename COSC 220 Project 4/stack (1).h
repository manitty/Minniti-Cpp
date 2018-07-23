

    #ifndef STACK_H
//Paul Minniti 
// 11/5/15
// COSC 220-001
// lab #7
    
    #define STACK_H

     

    template <typename T>

    class MyStack{

    private:
      Vector<T> vStack;

           

    public:

           MyStack (int);              // constructor create a stack with size

           ~MyStack();                 // destructor

           bool IsEmpty() const;       // check empty stack for pop

           bool IsFull() const;        // check full stack to insert new data

           void Push (const T & item); // push a node in the stack

           void PrintStack() const;    // print stack

           void  Pop();            // Pop a node from the top of stack

           T&  TopStack() const; // Retrun Data from the top of the stack

    };

    #include "Stack.cpp"

    #endif
