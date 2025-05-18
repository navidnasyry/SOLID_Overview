public class NotificationService
{
    public void SendNotification(string message, string notificationType)
    {

        if (notificationType == "Email")
        {
            SendEmailNotification(message);
        }
        else if (notificationType == "SMS")
        {
            SendSmsNotification(message);
        }
        else if (notificationType == "PushNotification")
        {
            SendPushNotification(message);
        }
        else
        {
            throw new NotSupportedException($"Notification type {notificationType} is not supported.");
        }
    }

    private void SendEmailNotification(string message)
    {
        Console.WriteLine($"Sending email notification: {message}");
    }
    
    private void SendSmsNotification(string message)
    {
        Console.WriteLine($"Sending SMS notification: {message}");
    }

    private void SendPushNotification(string message)
    {
        Console.WriteLine($"Sending push notification: {message}");
    }
    
}