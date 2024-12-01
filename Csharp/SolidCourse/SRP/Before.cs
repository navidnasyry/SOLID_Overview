// class User

public class User
{
    public long Id { get; set; }
    public string Username { get; set; }
    public string Password { get; set; }
    public string Email { get; set; }
    
    public void AddUser(string username) 
    {
        // Add user logic
        Console.WriteLine($"User {username} added.");
        LogAction("User added");
    }
    
    public void RemoveUser(string username) 
    {
        // Remove user logic
        Console.WriteLine($"User {username} removed.");
        LogAction("User removed");
    }
    
    private void LogAction(string message) 
    {
        Console.WriteLine($"Log: {message}");
    }
}