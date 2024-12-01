public interface IShape
{
    double Area();
}

public class MyCircle : IShape
{
    private readonly double _radius;

    public MyCircle(double radius)
    {
        _radius = radius;
    }

    public double Area()
    {
        return Math.PI * _radius * _radius; 
    }
}

public class MyRectangle : IShape
{
    private readonly double _width;
    private readonly double _height;

    public MyRectangle(double width, double height)
    {
        _width = width;
        _height = height;
    }

    public double Area()
    {
        return _width * _height;
    }
}

public class ShapeAreaCalculator
{
    public double CalculateArea(IShape shape)
    {
        return shape.Area();
    }
}