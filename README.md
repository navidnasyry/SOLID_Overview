# SOLID Principles - Code Examples

Welcome to the **SOLID Principles** teaching repository!  
This repo provides clear and practical code examples demonstrating the **SOLID** principles of object-oriented design. For each principle, you will find **before** and **after** refactorings in two programming languages.


## What is SOLID?

SOLID is an acronym for five key design principles that help developers write maintainable, extensible, and robust object-oriented code:

---

### 🟡 S — Single Responsibility Principle (SRP)

> A class should have only one reason to change.

**Advantages:**
- Simplifies code by limiting class responsibilities.
- Makes code easier to test and maintain.
- Encourages separation of concerns.

**Problems It Solves:**
- Classes doing too much and becoming hard to change without affecting other behaviors.
- Difficulties in testing or understanding code due to unrelated logic being mixed together.

---

### 🟣 O — Open/Closed Principle (OCP)

> Software entities should be open for extension, but closed for modification.

**Advantages:**
- Encourages adding new behavior without touching existing code.
- Minimizes regression bugs during feature additions.
- Supports plugin-based and modular architecture.

**Problems It Solves:**
- Frequent changes to existing code leading to unintended side effects.
- Code that isn’t adaptable or scalable due to hardcoded logic.

---

### 🔵 L — Liskov Substitution Principle (LSP)

> Subtypes must be substitutable for their base types.

**Advantages:**
- Promotes reliable and predictable use of polymorphism.
- Enhances reusability of components.
- Improves interface consistency across class hierarchies.

**Problems It Solves:**
- Inheritance misuse where subclasses alter expected behavior.
- Bugs that arise when a subclass cannot stand in for a parent class without breaking functionality.

---

### 🔴 I — Interface Segregation Principle (ISP)

> Clients should not be forced to depend on interfaces they do not use.

**Advantages:**
- Encourages lean, purpose-specific interfaces.
- Reduces unnecessary coupling between modules.
- Simplifies implementation for classes using the interface.

**Problems It Solves:**
- "Fat" interfaces that force classes to implement unused methods.
- Tight coupling between classes and unrelated functionality.

---

### 🟢 D — Dependency Inversion Principle (DIP)

> High-level modules should not depend on low-level modules. Both should depend on abstractions.

**Advantages:**
- Promotes loosely-coupled architecture.
- Enhances code reusability and flexibility.
- Improves testability with dependency injection.

**Problems It Solves:**
- Rigid code that breaks when low-level details change.
- Hard-to-test code due to direct dependency on concrete implementations.

---

## How to Use

1. Choose the language folder you want to explore.
2. Pick a principle folder (SRP, OCP, LSP, ISP, DIP).
3. Compare the `before` and `after` codes to understand how to apply the principle.
4. Read the code comments for explanations of the changes.

---

## Why Learn SOLID?

Applying SOLID principles helps you:

- Write cleaner, more understandable code.
- Reduce bugs and make your code easier to test.
- Make your codebase easier to extend with new features.
- Facilitate teamwork by improving code readability and design consistency.

---

## Contributions

Feel free to contribute by:

- Adding examples in other programming languages.
- Improving existing examples.
- Suggesting enhancements or additional explanations.

---

Happy coding and learning SOLID principles! 🚀
