#include <iostream>
class Student {
protected:
    std::string Name;
    std::string Lastname;
    int Age;
    std::string TeacherNumber;

public:
    Student(std::string name, std::string lastname, int dateOfBirth, std::string teacherNumber) {
        Name = name;
        Lastname = lastname;
        Age = dateOfBirth;
        TeacherNumber = teacherNumber;
    }
    void WritePersonalDetails() {
        std::string result = "\nName is " + this->Name + this->Lastname + \
                "\nAge is " + std::to_string(this->Age) + \
                "\nId is " + this->TeacherNumber;
        std::cout << result << std::endl;
    }
};

class Teacher : public Student{
private:
    std::string TeacherNumber;

public:
    Teacher(std::string name, std::string lastname, int dateOfBirth, std::string teacherNumber) : Student(name, lastname, dateOfBirth, teacherNumber) {
        TeacherNumber = teacherNumber;
    }

    void WritePersonalDetails() {
        std::string result = "\nName is " + this->Name + this->Lastname+ \
                "\nAge is " + std::to_string(this->Age) + \
                "\nId is " + this->TeacherNumber;
        std::cout << result << std::endl;
    }

};


int main() {

    Student student1 = Student("Navid", "Nasiri", 20, "122222");
    Teacher teacher1 = Teacher("ali", "gholi", 30, "1220000");
    student1.WritePersonalDetails();
    teacher1.WritePersonalDetails();

    return 0;
}
