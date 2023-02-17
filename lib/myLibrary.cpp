#include "myLibrary.h"

int add(int &a, int &b)
{
    return a + b;
}

Student::Student(std::string name, int age) : name_(name), age_(age) {}
Student::~Student() = default;
// Getters
const std::string &Student::getName() const { return name_; }
int Student::getAge() const { return age_; }
double Student::getAverageGrade() const { return averageGrade_; }
// Setters
void Student::setName(const std::string &name) { name_ = name; }
void Student::setAge(int age) { age_ = age; }
// Other methods
void Student::getInfo() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Age: " << age_ << std::endl;
    if (grades_.empty())
        std::cout << "Average: Unknow (no grades)" << std::endl;
    else
        std::cout << "Average: " << this->getAverageGrade() << std::endl;
}
void Student::addGrade(const double &grade)
{
    grades_.push_back(grade);
    averageGrade_ = this->computeAverage();
}
double Student::computeAverage() const
{
    double sum = 0.;
    for (const auto &grade : grades_)
    {
        sum += grade;
    }
    return sum / grades_.size();
}

PhysicsStudent::PhysicsStudent(std::string name, int age)
    : Student::Student(name, age) {}
PhysicsStudent::~PhysicsStudent() = default;

void PhysicsStudent::addPhysicsCourse(const std::string &physicsCourse)
{
    physicsCourses_.emplace_back(physicsCourse);
}

std::list<std::string> PhysicsStudent::getPhysicsCourses() const
{
    return physicsCourses_;
}
void PhysicsStudent::getInfo()
{
    Student::getInfo();
    std::cout << "Physics courses: ";
    for (const auto &physicsCourse : physicsCourses_)
    {
        std::cout << physicsCourse << " ";
    }
}