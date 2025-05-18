// Machine.cpp
#include <iostream>
#include <stdexcept>
#include <string>

class IMachine {
public:
    virtual void Print(const std::string& document) = 0;
    virtual void Fax(const std::string& document) = 0;
    virtual ~IMachine() = default;
};

// Printer class forced to implement Fax
class Printer : public IMachine {
public:
    void Print(const std::string& document) override {
        std::cout << "Printing: " << document << std::endl;
    }

    void Fax(const std::string& document) override {
        throw std::logic_error("Faxing not supported.");
    }
};

// Fax machine forced to implement Print
class FaxMachine : public IMachine {
public:
    void Print(const std::string& document) override {
        throw std::logic_error("Printing not supported.");
    }

    void Fax(const std::string& document) override {
        throw std::logic_error("Faxing not supported.");
    }
};

// Client code
class Office {
public:
    void ProcessDocument(IMachine& machine, const std::string& document) {
        machine.Print(document);
        machine.Fax(document); // Might throw depending on implementation
    }
};
