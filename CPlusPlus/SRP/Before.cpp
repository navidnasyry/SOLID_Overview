#include <iostream>
#include <string>

class User {
public:
    long Id;
    std::string Username;
    std::string Password;
    std::string Email;

    void AddUser(const std::string& username) {
        // Add user logic
        std::cout << "User " << username << " added." << std::endl;
        LogAction("User added");
    }

    void RemoveUser(const std::string& username) {
        // Remove user logic
        std::cout << "User " << username << " removed." << std::endl;
        LogAction("User removed");
    }

private:
    void LogAction(const std::string& message) {
        std::cout << "Log: " << message << std::endl;
    }
};
