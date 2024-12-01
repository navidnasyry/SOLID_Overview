using NotImplementedException = System.NotImplementedException;

public class Shape
{
    public string Type;
    public Shape(string type)
    {
        Type = type;
    }
    public double Area()
    {
        if (Type == "Circle")
        {
            // Calculate area for circle
            return 3.14 * 5 * 5;
        }
        else if (Type == "Rectangle")
        {
            // Calculate area for rectangle
            return 5 * 10; 
        }

        throw new NotImplementedException("Shape type not supported");
    }
}

public class Circle : Shape
{
    public Circle() : base("Circle")
    {
    }
}

public class Rectangle : Shape
{
    public Rectangle() : base("Rectangle")
    {
    }
}