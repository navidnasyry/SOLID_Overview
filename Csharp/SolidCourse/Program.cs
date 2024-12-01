// // See https://aka.ms/new-console-template for more information
// SRP: We separated responsibilities into different classes.
// OCP: We used interfaces for payment methods to allow easy extension.
// LSP: We can now add new payment methods without modifying existing payments.
// ISP: Each class has specific responsibilities.
// DIP: High-level classes depend on interfaces rather than concrete implementations, making the system flexible and easier to test.
Console.WriteLine("Hello, World!");
