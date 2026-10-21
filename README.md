# C++ OOP Assignment

This repository contains solutions to two C++ programming questions based on Object-Oriented Programming (OOP).

## Questions

### Question 1: Complex Numbers

Create a `Complex` class to represent complex numbers and implement functions to add and subtract two complex numbers.

**File:** `complex.cpp`

**Concepts covered:**
- Classes and objects
- Private data members
- Constructors
- Member functions
- Addition and subtraction of complex numbers

### Question 2: Person Class

Create a `Person` class and an array capable of holding 100 `Person` objects. Implement functions to populate the array and display its contents.

**File:** `person.cpp`

**Concepts covered:**
- Classes and objects
- Arrays of objects
- Data encapsulation
- Input and output
- Static member functions

## Requirements

- A C++ compiler supporting C++17 or later
- Bash shell to run `check.sh`

## Compilation and Execution

### Question 1

```bash
g++ -std=c++17 complex.cpp -o complex
./complex
```

### Question 2

```bash
g++ -std=c++17 person.cpp -o person
./person
```

## Automated Checks

Run the following command from the repository directory:

```bash
bash check.sh
```

The script compiles both programs and verifies basic test cases.

## Repository Structure

```text
cpp-oop-assignment/
├── complex.cpp
├── person.cpp
├── check.sh
├── README.md
└── .gitignore
```

## Author

C++ OOP Assignment
