// Base class
public class Bird
{
    public virtual void Walk()
    {
        Console.WriteLine("I can walk!");
    }
    public virtual void Fly()
    {
        Console.WriteLine("I can fly!");
    }
}

// Derived class
public class Eagle : Bird
{
    public override void Walk()
    {
        Console.WriteLine("Eagle can walk!");
    }
    public override void Fly()
    {
        Console.WriteLine("Sparrow flying high!");
    }
}

// Another derived class
public class Penguin : Bird
{
    public override void Walk()
    {
        Console.WriteLine("Penguin can walk!");
    }
    public override void Fly()
    {
        throw new NotSupportedException("Penguins cannot fly.");
    }
}

// Client Code
public class BirdManager
{
    public void MakeBirdFly(Bird bird)
    {
        bird.Fly(); // This works for Eagle but not for Penguin
    }
}