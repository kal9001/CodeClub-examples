/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

class Person {
    public:
        Person(std::string name) {
            this->name = name;
        }
        
        void printName() {
            std::cout << "Hello my name is " << this->name << "." << std::endl;
        }
        std::string name;
};

int main() {
    std::vector<Person> people;
    
    people.push_back(Person("Kevin"));
    people.push_back(Person("Chris"));
    people.push_back(Person("Laura"));
    
    Person p1 = Person("Kirsty");
    Person p2 = Person("James");
    
    people.push_back(p1);
    people.push_back(p2);
    
    for(Person i : people){
        i.printName();
    }
}
