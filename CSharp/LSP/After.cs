// Base class
public abstract class MyBird
{
    // We won't have a Fly method here anymore.
}

// New Flyable interface
public interface IFlyable
{
    void Fly();
}

// Derived class 1 - Eagle
public class MyEagle : Bird, IFlyable
{
    public void Fly()
    {
        Console.WriteLine("Sparrow flying high!");
    }
}

// Derived class 2 - Penguin
public class MyPenguin : MyBird
{
    // Penguins have no flying capabilities and do not implement IFlyable
}

// Client Code
public class MyBirdManager
{
    public void MakeBirdFly(IFlyable bird)
    {
        bird.Fly(); // This works for Eagle and does not apply to Penguin.
    }
}


// var birdManager = new MyBirdManager();
// var eagle = new MySparrow();
// birdManager.MakeBirdFly(eagle);
