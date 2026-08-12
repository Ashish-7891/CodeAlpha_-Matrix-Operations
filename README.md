# CodeAlpha_Matrix-Operations
# 🧮 Matrix Operations Using C

A console-based **Matrix Operations Application** developed in C as part of my **CodeAlpha C Programming Internship**.

This project performs important matrix operations using **2D arrays and functions**, including Matrix Addition, Matrix Multiplication, and Matrix Transpose.

---

## 📌 Project Overview

Matrix operations are an important part of programming, mathematics, and computer science.

This application provides a menu-driven interface that allows users to perform different operations on matrices.

The project demonstrates the use of:

- 2D Arrays
- Functions
- Nested Loops
- Conditional Statements
- Switch-Case
- Input Validation

---

# ✨ Features

### ➕ Matrix Addition

- Adds two matrices
- Supports matrices up to 10×10
- Validates matrix dimensions

### ✖️ Matrix Multiplication

- Multiplies two compatible matrices
- Checks whether multiplication is possible
- Uses nested loops for calculation

### 🔄 Matrix Transpose

- Converts rows into columns
- Works with square and rectangular matrices

### 🧩 Modular Functions

Separate functions are used for:

- Matrix input
- Matrix display
- Matrix addition
- Matrix multiplication
- Matrix transpose

### 🛡️ Validation

- Handles invalid matrix sizes
- Checks matrix multiplication compatibility
- Handles invalid menu choices

### 🔁 Menu-Driven Program

- Easy-to-use console menu
- Allows multiple operations
- Exit option

---

# 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C | Core programming language |
| 2D Arrays | Matrix storage |
| Functions | Modular program design |
| Nested Loops | Matrix processing |
| Switch-Case | Menu selection |
| Conditional Statements | Validation |
| Standard I/O | User input and output |

---

# 🧠 Operations & Logic

## 1. Matrix Addition

Two matrices can be added when they have the same number of rows and columns.

Formula:

```text
Result[i][j] = A[i][j] + B[i][j]

---
```
# 📂 Project Structure
CodeAlpha_MatrixOperations/
```
│
├── src/
│   └── matrix_operations.c
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## ▶️ How to Run
### 1️⃣ Clone the Repository

```bash
git clone https://github.com/your-username/CodeAlpha_MatrixOperations.git
```

### 2️⃣ Open Project
```bash
cd CodeAlpha_MatrixOperations
```

### 3️⃣ Compile the Program

```bash
gcc src/matrix_operations.c -o matrix_operations
```

### 4️⃣ Run the Executable

**Windows**

```bash
matrix_operations.exe
```

**Linux / macOS**

```bash
./matrix_operations
```
---

##  🎮 Sample Gameplay

```
=================================
       MATRIX OPERATIONS
=================================
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Exit
=================================

Enter your choice: 1

Enter number of rows: 2
Enter number of columns: 2

Enter elements of Matrix A:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [2][1]: 3
Enter element [2][2]: 4

Enter elements of Matrix B:
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][1]: 7
Enter element [2][2]: 8

Result of Matrix Addition:
6       8
10      12

```

---

# 📸 Screenshots
Add screenshots of:

* Main Matrix Operations menu
* Matrix Addition
* Matrix Multiplication
* Matrix Transpose
* Invalid matrix input
* Complete output

---

# 📚 Learning Outcomes
Through this project, I improved my understanding of:

C programming fundamentals
* Two-dimensional arrays
* Matrix operations
* Functions
* Nested loops
* Switch-case statements
* Input validation
* Modular programming
* Problem-solving skills


---

# 🚀 Future Improvements

Possible future upgrades:
* Dynamic memory allocation
* Larger matrix support
* Matrix determinant
* Matrix inverse
* Scalar multiplication
* Matrix rotation
* Graphical User Interface (GUI)

---

# 👩‍💻 Author

**Ashish Kumar Gupta**

B.Tech Computer Science Engineering

---

# ⭐ Acknowledgement
Developed as part of the CodeAlpha C Programming Internship Program to strengthen programming skills, problem-solving abilities, and practical software development experience.
