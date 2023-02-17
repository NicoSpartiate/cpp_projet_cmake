#include "myLibrary.h"

int main()
{
    int a = 2, b = 5, sum;
    sum = add(a, b);
    std::cout << "Sum: " << sum << std::endl;

    Student s("Nicolas", 25);
    s.getInfo();
    s.addGrade(18);
    s.addGrade(19);
    s.getInfo();

    PhysicsStudent p("Tom", 23);
    p.addPhysicsCourse("Relativity");
    p.addPhysicsCourse("Mechanics");
    p.addGrade(16);
    p.addGrade(15);
    p.getInfo();

    // s.setName("Dominique");
    // s.setAge(58);
    // std::cout << "Name: " << s.getName() << std::endl;
    // std::cout << "Age: " << s.getAge() << std::endl;
}