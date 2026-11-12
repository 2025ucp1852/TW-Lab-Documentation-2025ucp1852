/**
 * @file 02-structures-and-variables.cpp
 * @brief Demonstrates Doxygen documentation for structures and variables.
 * @author Vikram Mehra
 * @date 2026
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @struct Student
 * @brief Stores information about a student.
 */
struct Student {
    /// Student's roll number.
    int rollNumber;

    /// Student's name.
    string name;

    /// Student's marks.
    float marks;
};

/**
 * @brief Displays student information.
 * @param student Student record to display.
 */
void displayStudent(const Student& student) {
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Name: " << student.name << endl;
    cout << "Marks: " << student.marks << endl;
}

/**
 * @brief Main function of the program.
 * @return 0 when execution is successful.
 */
int main() {
    Student student = {101, "Amit", 88.5};

    displayStudent(student);

    return 0;
}