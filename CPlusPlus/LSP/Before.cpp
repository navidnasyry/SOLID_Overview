#include <iostream>
#include <stdexcept>
#include <memory>

class Bird {
public:
    virtual void Walk() {
        std::cout << "I can walk!" << std::endl;
    }

    virtual void Fly() {
        std::cout << "I can fly!" << std::endl;
    }

    virtual ~Bird() = default;
};

class Eagle : public Bird {
public:
    void Walk() override {
        std::cout << "Eagle can walk!" << std::endl;
    }

    void Fly() override {
        std::cout << "Sparrow flying high!" << std::endl;
    }
};

class Penguin : public Bird {
public:
    void Walk() override {
        std::cout << "Penguin can walk!" << std::endl;
    }

    void Fly() override {
        throw std::logic_error("Penguins cannot fly.");
    }
};

class BirdManager {
public:
    void MakeBirdFly(Bird& bird) {
        bird.Fly(); // Throws for Penguin
    }
};
