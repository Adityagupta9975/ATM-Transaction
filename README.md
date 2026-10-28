# ATM Management System in C

## About the Project
The ATM Management System is a menu-driven console application developed using the C programming language. It simulates basic ATM operations and provides PIN-based authentication to access banking features.

The project demonstrates fundamental C programming concepts, including functions, pointers, arrays, loops, conditional statements, and switch-case statements.

## Features
- **PIN Authentication:** Verifies the ATM PIN and allows up to 3 login attempts.
- **Deposit:** Adds money to the account after PIN authorization.
- **Withdrawal:** Withdraws money after authentication and checks the available balance.
- **Balance Enquiry:** Displays the current account balance.
- **Mini Statement:** Shows recorded deposit and withdrawal transactions.
- **Input Validation:** Checks for invalid amounts and insufficient balance.
- **Exit Option:** Safely exits the application.

## Technologies Used
- C Programming
- Standard Input/Output Library (`stdio.h`)
- Pointers and Functions
- Arrays
- Loops and Conditional Statements

## Default Credentials
- **ATM PIN:** `1234`
- **Initial Balance:** ₹5,000

> Note: These are hardcoded demo credentials for learning purposes only. This application is not intended for real banking transactions.

## How to Run

### Option 1: Using GCC
1. Clone this repository:
   ```bash
   git clone YOUR_GITHUB_REPOSITORY_URL
   ```
2. Open the project folder:
   ```bash
   cd YOUR_REPOSITORY_NAME
   ```
3. Compile the C program:
   ```bash
   gcc main.c -o atm
   ```
4. Run the program:

   **Windows**
   ```bash
   atm.exe
   ```

   **Linux/macOS**
   ```bash
   ./atm
   ```

### Option 2: Using an IDE
Open `main.c` in Code::Blocks, VS Code, or another C-compatible IDE, compile the program, and run it in the terminal.

## Project Structure
```text
ATM-Management-System/
├── main.c
├── run.bat
├── README.md
└── .gitignore
```

The compiled executable (`main.exe`) is optional and can be generated from the source code.

## Learning Outcomes
- Understanding modular programming using functions.
- Using pointers to modify account balances.
- Managing transaction records with arrays.
- Implementing authentication and validation logic.
- Building an interactive, menu-driven C application.

## Future Improvements
- Store transaction history in a file or database.
- Support multiple user accounts.
- Add transaction dates and timestamps.
- Improve input validation and error handling.
- Replace hardcoded credentials with secure authentication.

## Disclaimer
This project is intended for educational purposes and demonstrates basic ATM operations. It does not implement production-grade banking security or persistent transaction storage.

## Author
Developed as a C programming project to practice programming fundamentals and basic banking operations.
