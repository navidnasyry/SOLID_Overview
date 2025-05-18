// Abstraction
public interface IDatabase
{
    void Save(string userData);
}

// Low-level module implementing the abstraction
public class MyDatabase : IDatabase
{
    public void Save(string userData)
    {
        Console.WriteLine($"Saved to database: {userData}");
    }
}

// High-level module now depends on the abstraction
public class MyUsersService
{
    private IDatabase _database;

    // Dependency Injection via constructor
    public MyUsersService(IDatabase database)
    {
        _database = database;
    }

    public void RegisterUser(string userData)
    {
        _database.Save(userData);
    }
}


// IDatabase database = new Database(); // Concrete implementation
// var userService = new UsersService(database); // Injecting the dependency
// userService.RegisterUser("John Doe");
