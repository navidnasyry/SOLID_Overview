#include <iostream>
#include <string>
#include <memory>

// Interface
class INotification {
public:
    virtual void Send(const std::string& message) = 0;
    virtual ~INotification() = default;
};

// Concrete classes
class EmailNotification : public INotification {
public:
    void Send(const std::string& message) override {
        std::cout << "Sending email notification: " << message << std::endl;
    }
};

class SmsNotification : public INotification {
public:
    void Send(const std::string& message) override {
        std::cout << "Sending SMS notification: " << message << std::endl;
    }
};

class PushNotification : public INotification {
public:
    void Send(const std::string& message) override {
        std::cout << "Sending push notification: " << message << std::endl;
    }
};

// Service class using dependency injection
class MyNotificationService {
private:
    INotification& notification;

public:
    MyNotificationService(INotification& notif) : notification(notif) {}

    void SendNotification(const std::string& message) {
        notification.Send(message);
    }
};
