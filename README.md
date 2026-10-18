# C Student Record Management System

## About the Project
This is a simple Student Record Management System developed using the C programming language. It allows users to add student records, view all saved records, and search for a student using their ID.

This project was created to practice basic C programming concepts such as structures, arrays, loops, and conditional statements.

## Features
- Add a new student record.
- View all student records.
- Search for a student by ID.
- Store student names, IDs, and marks.
- Display records using a simple menu.
- Easy-to-use console interface.

## How the Code Works
1. **Define a structure:** A `struct Student` stores each student's ID, name, and marks.
2. **Create storage:** An array stores multiple student records in memory.
3. **Display the menu:** A menu lets the user choose an operation.
4. **Add a student:** The program asks for the student's details and stores them in the array.
5. **View students:** The program displays all records currently stored.
6. **Search for a student:** The program asks for an ID and checks the records for a match.
7. **Repeat or exit:** A loop continues displaying the menu until the user chooses to exit.

## Example Output

```text
===== Student Record Management System =====
1. Add Student
2. View Students
3. Search Student
4. Exit

Enter your choice: 1

Enter Student ID: 101
Enter Student Name: John Smith
Enter Marks: 85

Student record added successfully!
```

## Concepts Used
- Structures (`struct`)
- Arrays
- Variables and data types
- `printf()` and `scanf()`
- `if-else` statements
- `switch` statements
- Loops
- Searching records

## How to Run
1. Install Code::Blocks or another C compiler.
2. Open the C source file in your IDE.
3. Build and run the program.
4. Select an option from the menu.
5. Follow the instructions displayed on the screen.

## Limitations
- Student records are stored only in memory.
- All records are lost when the program closes.
- The number of students is limited by the array size.
- Duplicate student IDs may not be prevented in the current version.

## Future Improvements
- Save student records to a file.
- Add edit and delete features.
- Prevent duplicate student IDs.
- Validate student input.
- Support more student information.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author
Created as a beginner C programming project for learning and practice.
