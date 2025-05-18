#include <iostream>
#include <memory>

// Abstract base class for birds
class MyBird {
public:
    virtual ~MyBird() = default;
};

// Interface-like abstract class for flying behavior
class IFlyable {
public:
    virtual void Fly() = 0;
    virtual ~IFlyable() = default;
};

// Eagle (flyable)
class MyEagle : public MyBird, public IFlyable {
public:
    void Fly() override {
        std::cout << "Sparrow flying high!" << std::endl;
    }
};

// Penguin (non-flyable)
class MyPenguin : public MyBird {
    // Does not implement IFlyable
};

// Bird manager using interface
class MyBirdManager {
public:
    void MakeBirdFly(IFlyable& bird) {
        bird.Fly(); // Safe: Only works on flyable birds
    }
};
