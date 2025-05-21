# Student Database
##OBJECTIVE:
------------
This is a menu-driven Student Database System in C using Singly Linked List (SLL), File Handling, and Dynamic Memory Allocation (DMA). The program allows managing student records with features like adding, editing, deleting, searching, saving, and reverse displaying the list of students.

## FEATURES:
------------
✔ Add a new student record
✔ Print all student records
✔ Save records to file
✔ Load records from file at startup
✔ Delete student record by ID
✔ Edit student details (name, DOB, marks, contact, email)
✔ Search student by ID
✔ Display all student records in reverse order
✔ Auto-generate unique Student ID
✔ Persistent alphabet counter using file alpha_counts.dat

---

## UNIQUE STUDENT ID FORMAT:
---------------------------
ID format: V24HE5<Initial><Count>
- V24HE5: Fixed institution/batch code

## USES OF VARIOUS FILES
---------------------------------
->data of allocated ID's are stored and loaded from a file.
->data of records are stored and loaded from a file.
->.h file contains all required declarations,structures.
->.c file has the difinations and functions.
->performed multiple compilation using makefile concept.

## HOW TO COMPILE AND RUN:
--------------------------
### 1. Compile using Makefile:
uses ->bash
make
and run executable
-select desired option and add data
