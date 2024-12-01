

public interface INotification
{
    void Send(string message);
}

public class EmailNotification : INotification
{
    public void Send(string message)
    {
        Console.WriteLine($"Sending email notification: {message}");
    }
}

public class SmsNotification : INotification
{
    public void Send(string message)
    {
        Console.WriteLine($"Sending SMS notification: {message}");
    }
}

public class PushNotification : INotification
{
    public void Send(string message)
    {
        Console.WriteLine($"Sending push notification: {message}");
    }
}


public class MyNotificationService
{
    private readonly INotification _notifications;

    public MyNotificationService(INotification notification)
    {
        _notifications = notification;
    }
    
    public void SendNotification(string message)
    {
        _notifications.Send(message);
    }
}