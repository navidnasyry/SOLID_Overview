#include <iostream>
#include <string>

// Low-level module
class Database {
public:
    void Save(const std::string& userData) {
        std::cout << "Saved to database: " << userData << std::endl;
    }
};

// High-level module tightly coupled to Database
class UsersService {
private:
    Database database;

public:
    void RegisterUser(const std::string& userData) {
        database.Save(userData);
    }
};
