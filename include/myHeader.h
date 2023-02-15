#pragma once
#include <iostream>
#include <vector>
#include <list>

int add(int &a, int &b);

class Student
{
private:
    std::string name_;
    int age_;
    std::vector<double> grades_;
    double averageGrade_;

public:
    // Constructor and ~Destructor
    explicit Student(std::string name, int age);
    ~Student();
    // Getters
    const std::string &getName() const; // const keyword : https://www.youtube.com/watch?v=4fJBrditnJU&ab_channel=TheCherno
    int getAge() const;                 // a const member function promises not to modify the object on which it is called.
    double getAverageGrade() const;
    // Setters
    void setName(const std::string &name); /*ChatGPT : The line void set_name(const std::string &name);
    is better than void set_name(std::string name); because it takes a reference to a constant string, instead of a copy of the string.
    When you pass an argument by value (as in your original code), a copy of the argument is made, which can be inefficient for large objects
     such as strings. When you pass an argument by reference (as in the improved code), no copy is made and the original object is used directly.
    In general, it's a good practice to pass objects by reference to constant (const T &) when you don't need to modify the argument,
    and by reference (T &) when you do. This can help improve performance and avoid unintended side effects.*/
    void setAge(int age);                  /*ChatGPT : That line is fine as is, and there's no need to change it.
                     The set_age function takes an int by value, which is a primitive data type that is lightweight
                     and can be efficiently passed by value. For small data types like int,
                     passing by value is not a performance issue and is often the simplest and most straightforward way
                      to pass the argument. In this case, there's no need to use a reference to a constant or a reference,
                      as the function does not modify the argument and the overhead of making a copy is small.*/
    // Other methods
    void getInfo() const;
    void addGrade(const double &grade);
    double computeAverage() const;
};

class PhysicsStudent : public Student
{
private:
    std::list<std::string> physicsCourses_;

public:
    explicit PhysicsStudent(std::string name, int age);
    ~PhysicsStudent();
    void addPhysicsCourse(const std::string &physicsCourse);
    std::list<std::string> getPhysicsCourses() const;
    void getInfo();
};

// or instead of using pragma once :
// #ifndef MYHEADER_H
// #define MYHEADER_H

// int add(int & a, int & b);

// #endif // MYHEADER_H
