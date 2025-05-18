// MyMachine.cpp
#include <iostream>
#include <string>

// Interface for printing
class IPrinter {
public:
    virtual void Print(const std::string& document) = 0;
    virtual ~IPrinter() = default;
};

// Interface for faxing
class IFaxMachine {
public:
    virtual void Fax(const std::string& document) = 0;
    virtual ~IFaxMachine() = default;
};

// Concrete printer
class MyPrinter : public IPrinter {
public:
    void Print(const std::string& document) override {
        std::cout << "Printing: " << document << std::endl;
    }
};

// Concrete fax machine
class MyFaxMachine : public IFaxMachine {
public:
    void Fax(const std::string& document) override {
        std::cout << "Faxing: " << document << std::endl;
    }
};

// Client code
class MyOffice {
public:
    void ProcessDocument(IPrinter& printer, const std::string& document) {
        printer.Print(document);
    }

    void SendFax(IFaxMachine& faxMachine, const std::string& document) {
        faxMachine.Fax(document);
    }
};
