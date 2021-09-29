#include <iostream>
#include "test.h"

class Stack
{

protected:
        int stack_size = 10;

private:
    int *array;

    int interator = 0;


public:
    Stack():array(new int [stack_size])
    {}
    void puch (int a)
    {
        array[interator++] =a;
    }
    void print(){
        for(int i = 0 ;  i < interator; i++ )
        {
            std::cout << array[i]<<" ";
        }
        std::cout<< std::endl;
    }
    void pop()
    {
        array[interator--] = NULL;
    }
    ~Stack()
    {
        delete []array;
    }
};

void Add(int a)
{
    std::cout<< a << std::endl;
}


int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "test" << std::endl;

    std::cout << "test" << std::endl;

    Stack s ;
    s.puch(44);
    s.print();
    s.puch(443);
    s.print();
    s.pop();
    s.print();

    s.puch(56);
    s.puch(88);
    s.puch(55);
    s.print();

    Add (44);

    return 0;
}
