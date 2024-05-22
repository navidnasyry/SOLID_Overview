#include <iostream>
#include <string>

/*
 * Interfaces are nothing but a way to describe the behavior of a class without
 * committing to the implementation of the class.
 * In C++ programming there is no built-in concept of interfaces.
 * In order to create an interface, we need to create an
 * abstract class which is having only pure virtual methods.
 * In C++, Interfaces are also called pure abstract classes.
 * */

/*
 * Abstract Class
An abstract class is a class that is specially designed to be used as a base class.
 Abstract class must have at least one pure virtual function.
 It may have variables and normal functions.
 The derived classes of an abstract class must implement all the pure virtual functions
 of their base class or else they too become abstract.
 * */

class IPersonalDetails {
public:
    virtual std::string GetFullName() = 0;

    virtual std::string GetUniqueNumber() = 0;

    virtual int GetAge() = 0;
};


class Student : public IPersonalDetails {
private:
    std::string Name;
    std::string Lastname;
    int YearOfBirth;
    std::string StudentNumber;

public:
    Student(std::string name, std::string lastname, int dateOfBirth, std::string studentNumber) {
        Name = name;
        Lastname = lastname;
        YearOfBirth = dateOfBirth;
        StudentNumber = studentNumber;
    }

    std::string GetFullName() {
        return this->Name + this->Lastname;
    }

    std::string GetUniqueNumber() {
        return this->StudentNumber;
    }

    int GetAge() {
        return 1403 - this->YearOfBirth;
    }

};

class Teacher : public IPersonalDetails {
private:
    std::string Name;
    std::string Lastname;
    int YearOfBirth;
    std::string TeacherNumber;

public:
    Teacher(std::string name, std::string lastname, int dateOfBirth, std::string teacherNumber) {
        Name = name;
        Lastname = lastname;
        YearOfBirth = dateOfBirth;
        TeacherNumber = teacherNumber;
    }
    std::string GetFullName() {
        return this->Name + this->Lastname;
    }
    std::string GetUniqueNumber() {
        return this->TeacherNumber;
    }
    int GetAge() {
        return 1403 - this->YearOfBirth;
    }
};

class PersonalDetailsWriter {
public:
    void CreatePersonalDetails(IPersonalDetails &person) {
        std::string result = "\nName is " + person.GetFullName() + \
            "\nAge is " + std::to_string(person.GetAge()) + \
            "\nId is " + person.GetUniqueNumber();
        std::cout << result<< std::endl<<std::endl;
    }

};


int main() {
    Student student1 = Student("Navid", "Nasiri", 1380, "122222");
    Teacher teacher1 = Teacher("ali", "gholi", 1370, "1220000");

    PersonalDetailsWriter personalDetailsWriter;
    personalDetailsWriter.CreatePersonalDetails(student1);
    personalDetailsWriter.CreatePersonalDetails(teacher1);


    return 0;
}
