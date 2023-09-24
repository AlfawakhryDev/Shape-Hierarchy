# Virtual Functions in C++

This repository demonstrates the use of virtual functions in C++ to implement polymorphism. Polymorphism allows objects of different classes to be treated as objects of a common base class. In this example, we have a base class `Shape` and two derived classes `Circle` and `Rectangle`. Each class has its own implementation of the `getArea()` method.

## Code Overview

### Shape Class

- The `Shape` class is the base class that represents a generic shape.
- It defines a virtual function `double getArea() const`, which returns 0.0 by default. This function will be overridden by derived classes.

### Circle Class

- The `Circle` class is derived from `Shape`.
- It has a private member `double radius`.
- The `Circle` constructor initializes the radius.
- It overrides the `getArea()` method to calculate the area of a circle.

### Rectangle Class

- The `Rectangle` class is derived from `Shape`.
- It has private members `double length` and `double width`.
- The `Rectangle` constructor initializes the length and width.
- It overrides the `getArea()` method to calculate the area of a rectangle.

## Usage

- The `main()` function demonstrates the use of these classes.
- It creates instances of `Circle` and `Rectangle` and stores them in an array of `Shape` pointers.
- The program then iterates through the array and calls the `getArea()` method for each shape, displaying the calculated area.

## How to Run

1. Compile the code using a C++ compiler.
2. Run the executable.

```bash
g++ -o main main.cpp
./main
```
