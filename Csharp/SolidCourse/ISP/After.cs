// Smaller interfaces
public interface IPrinter
{
    void Print(string document);
}

public interface IFaxMachine
{
    void Fax(string document);
}

// Printer class now implements only the printer interface
public class MyPrinter : IPrinter
{
    public void Print(string document)
    {
        Console.WriteLine($"Printing: {document}");
    }
}

// Fax machine that implements the faxing interface
public class MyFaxMachine : IFaxMachine
{
    public void Fax(string document)
    {
        Console.WriteLine($"Faxing: {document}");
    }
}

// Client code
public class MyOffice
{
    public void ProcessDocument(IPrinter printer, string document)
    {
        printer.Print(document);
    }

    public void SendFax(IFaxMachine faxMachine, string document)
    {
        faxMachine.Fax(document);
    }
}