// Low-level module
public class Database
{
    public void Save(string userData)
    {
        Console.WriteLine($"Saved to database: {userData}");
    }
}

// High-level module
public class UsersService
{
    private Database _database;

    public UsersService()
    {
        _database = new Database(); // Direct dependency on a concrete class
    }

    public void RegisterUser(string userData)
    {
        _database.Save(userData);
    }
}

//
//
// var userService = new UserService();
// userService.RegisterUser("John Doe");
