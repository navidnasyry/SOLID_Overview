#include <iostream>
#include <string>

/////////// MyUser.cpp
class MyUser {
public:
    long Id;
    std::string Username;
    std::string Password;
    std::string Email;
};

/////////// Logger.cpp
class Logger {
public:
    void LogAction(const std::string& message) {
        std::cout << "Log: " << message << std::endl;
    }
};


/////////// UserCreator.cpp
class UserCreator {
    private:
        Logger& logger;  // reference to shared Logger
    
    public:
        UserCreator(Logger& loggerRef) : logger(loggerRef) {}
    
        void AddUser(const std::string& username) {
            std::cout << "User " << username << " added." << std::endl;
            logger.LogAction("User " + username + " added.");
        }
    };
    

/////////// UserRemover.cpp
class UserRemover {
    private:
        Logger& logger;
    
    public:
        UserRemover(Logger& loggerRef) : logger(loggerRef) {}
    
        void RemoveUser(const std::string& username) {
            std::cout << "User " << username << " removed." << std::endl;
            logger.LogAction("User " + username + " removed.");
        }
    };
    