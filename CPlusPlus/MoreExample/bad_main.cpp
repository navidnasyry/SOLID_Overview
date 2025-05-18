#include <iostream>


class Student {
private:
    std::string Name;
    std::string Lastname;
    int YearOfBirth;
    std::string TeacherNumber;

public:
    Student(std::string name, std::string lastname, int dateOfBirth, std::string teacherNumber) {
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

class Teacher {
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
    void CreatePersonalDetails(Student *student = nullptr, Teacher *teacher = nullptr) {
        std::string result;
        if (teacher == nullptr) {
            result = "\nName is " + student->GetFullName() + \
                "\nAge is " + std::to_string(student->GetAge()) + \
                "\nId is " + student->GetUniqueNumber();
        } else if (student == nullptr) {
            result = "\nName is " + teacher->GetFullName() + \
                "\nAge is " + std::to_string(teacher->GetAge()) + \
                "\nId is " + teacher->GetUniqueNumber();
        }
        std::cout << result << std::endl << std::endl;
    }
};


int main() {

    Student student1 = Student("Navid", "Nasiri", 1380, "122222");
    Teacher teacher1 = Teacher("ali", "gholi", 1370, "1220000");


    PersonalDetailsWriter personalDetailsWriter;
    personalDetailsWriter.CreatePersonalDetails(&student1, nullptr);
    personalDetailsWriter.CreatePersonalDetails(nullptr, &teacher1);
    return 0;
}
