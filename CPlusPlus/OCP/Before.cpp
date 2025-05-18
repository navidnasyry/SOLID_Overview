// NotificationService.cpp
#include <iostream>
#include <string>
#include <stdexcept>

class NotificationService {
public:
    void SendNotification(const std::string& message, const std::string& notificationType) {
        if (notificationType == "Email") {
            SendEmailNotification(message);
        }
        else if (notificationType == "SMS") {
            SendSmsNotification(message);
        }
        else if (notificationType == "PushNotification") {
            SendPushNotification(message);
        }
        else {
            throw std::invalid_argument("Notification type " + notificationType + " is not supported.");
        }
    }

private:
    void SendEmailNotification(const std::string& message) {
        std::cout << "Sending email notification: " << message << std::endl;
    }

    void SendSmsNotification(const std::string& message) {
        std::cout << "Sending SMS notification: " << message << std::endl;
    }

    void SendPushNotification(const std::string& message) {
        std::cout << "Sending push notification: " << message << std::endl;
    }
};



