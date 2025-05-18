// MyUserService.cpp
#include <iostream>
#include <string>
#include <memory>

// Abstraction
class IDatabase {
public:
    virtual void Save(const std::string& userData) = 0;
    virtual ~IDatabase() = default;
};

// Concrete implementation
class MyDatabase : public IDatabase {
public:
    void Save(const std::string& userData) override {
        std::cout << "Saved to database: " << userData << std::endl;
    }
};

// High-level module depends on abstraction
class MyUsersService {
private:
    std::shared_ptr<IDatabase> database;

public:
    // Constructor injection
    MyUsersService(std::shared_ptr<IDatabase> db) : database(db) {}

    void RegisterUser(const std::string& userData) {
        database->Save(userData);
    }
};
