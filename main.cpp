#include <iostream>
#include "Stack.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Stack<int> stiven;
    std::cout<<"Elementele stivei sunt: ";
    stiven.printStack();
    std::cout<<"\n";
    std::cout<<"Este stiva goala?(1/0): ";
    std::cout<<stiven.emptyStack()<<"\n";
    stiven.push(1);
    stiven.push(2);
    stiven.push(3);
    stiven.push(4);
    std::cout<<"Elementele stivei sunt: ";
    stiven.printStack();
    std::cout<<"\n";
    std::cout<<"Este stiva goala?(1/0): ";
    std::cout<<stiven.emptyStack()<<"\n";
    std::cout<<"Cel mai recent element adaugat este: ";
    std::cout<<stiven.top()<<"\n";
    stiven.pop();
    stiven.pop();
    std::cout<<"Elementele stivei sunt: ";
    stiven.printStack();
    std::cout<<"\n";
    std::cout<<"Cel mai recent element adaugat este: ";
    std::cout<<stiven.top()<<"\n";
    stiven.pop();
    stiven.pop();
    stiven.pop();
    std::cout<<"Elementele stivei sunt: ";
    stiven.printStack();
    std::cout<<"\n";
    std::cout<<"Este stiva goala?(1/0): ";
    std::cout<<stiven.emptyStack()<<"\n";
    std::cout<<"Cel mai recent element adaugat este: ";
    std::cout<<stiven.top()<<"\n";
    return 0;
}