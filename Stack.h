//
// Created by Ionescu Alex on 08/01/2018.
//

#ifndef LAB11_STACK_H
#define LAB11_STACK_H

#include <list>
#include <iostream>

template <typename T>
class Stack
{
private:
    std::list<T> a;

public:
    bool emptyStack()
    {
        return a.empty();
    }
    void push(const T &item)
    {
        a.push_back(item);
    }
    T top()
    {
        if(a.empty())
        {
            std::cout<<"Eroare";
            return NULL;
        }
        return a.back();
    }
    void pop()
    {
        if( a.empty())
            return;
        a.pop_back();
    }
    void printStack()
    {
        for (auto it=a.begin(); it!=a.end(); ++it)
            std::cout << ' ' << *it;
    }

};


#endif //LAB11_STACK_H
