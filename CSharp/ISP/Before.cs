// Large interface
public interface IMachine
{
    void Print(string document);
    void Fax(string document);
}

// Printer class that doesn't need faxing capability
public class Printer : IMachine
{
    public void Print(string document)
    {
        Console.WriteLine($"Printing: {document}");
    }

    public void Fax(string document)
    {
        // Printer doesn't implement faxing, so we throw an exception
        throw new NotSupportedException("Faxing not supported.");
    }
}

// Printer class that doesn't need faxing capability
public class FaxMachine : IMachine
{
    public void Print(string document)
    {
        throw new NotSupportedException("Printing not supported.");
    }

    public void Fax(string document)
    {
        // Printer doesn't implement faxing, so we throw an exception
        throw new NotSupportedException("Faxing not supported.");
    }
}
// Client code
public class Office
{
    public void ProcessDocument(IMachine machine, string document)
    {
        machine.Print(document);
        machine.Fax(document); // This would cause an issue if machine is a Printer
    }
}