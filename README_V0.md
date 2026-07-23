# Student Record Management System (V0)

## Overview

The **Student Record Management System** is a console-based application developed in **C++** for managing student records. This version implements the core functionalities required to store, display, and search student information through a menu-driven interface.

The application utilizes dynamic memory allocation and follows a modular programming approach, where each operation is implemented as an independent function for improved readability, maintainability, and scalability.

---

## Features

- Dynamic allocation of student records
- Input multiple student records
- Display all stored student records
- Search for a student by roll number (Linear Search)
- Display complete details of the searched student
- Menu-driven console interface
- Proper dynamic memory deallocation using `delete[]`

---

## Student Information

Each student record contains the following fields:

- Name
- Roll Number
- Class
- Section
- Age
- Marks

---

## Technologies Used

- C++
- Dynamic Memory Allocation (`new` / `delete[]`)
- Functions
- Arrays
- Pointers
- Loops
- Conditional Statements
- Linear Search

---

## Project Structure

| Function | Description |
|----------|-------------|
| `Input()` | Takes the number of student records and allocates memory dynamically |
| `ArrayInput()` | Accepts details for all students |
| `Menu()` | Displays the available operations |
| `DisplayAll()` | Displays all student records |
| `SearchDisplay()` | Searches for a student using the roll number and displays the record |
| `DeleteArray()` | Frees dynamically allocated memory |

---

## Current Limitations

- Records exist only during program execution.
- Data is not stored permanently.
- Searching is implemented using Linear Search.
- Student records cannot be edited or deleted individually.
- Records are displayed in the order they are entered.

---

## Future Enhancements

- Add new student records
- Update existing student information
- Delete student records
- Sort records
- Implement Binary Search
- File handling for persistent storage
- Transition to `struct` or class-based implementation
- Improved input validation and exception handling

---

## Memory Management

Memory is allocated dynamically using `new` and released before program termination using `delete[]` to ensure proper resource management.