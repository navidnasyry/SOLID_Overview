public class MyUser
{
    public long Id { get; set; }
    public string Username { get; set; }
    public string Password { get; set; }
    public string Email { get; set; }
}

public class UserCreator
{
    private Logger _logger = new Logger();
    
    public void AddUser(string username) 
    {
        // Add user logic
        Console.WriteLine($"User {username} added.");
        var message = $"User {username} added.";
        _logger.LogAction(message);
    }
}

public class UserRemover
{
    private Logger _logger = new Logger();
    
    public void RemoveUser(string username) 
    {
        // Add user logic
        Console.WriteLine($"User {username} removed.");
        var message = $"User {username} removed.";
        _logger.LogAction(message);
    }
}

public class Logger
{
    public void LogAction(string message) 
    {
        Console.WriteLine($"Log: {message}");
    }
}