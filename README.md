# Uni-CodMelli
# Iranian National ID Validator (C++)

## 📌 About the Project
This project is a simple C++ console application that validates Iranian national ID numbers and identifies the associated city based on specific code prefixes.

## ✨ Features
- Validates Iranian national ID numbers using the check-digit algorithm.
- Identifies specific cities based on the first three digits of the ID.
- Displays whether the provided ID is valid or invalid.
- Supports multiple ID inputs in a single execution.

## 🏙️ Supported Cities
The program recognizes the following prefixes:

- `002` — Tehran
- `442` — Yazd
- `175` — Ahvaz
- `299` — Kerman
- `038` — Qom

Valid ID numbers with other prefixes are classified as `Other`.

## 🛠️ Technologies
- **Language:** C++
- **Standard Library:** iostream, string

## 🚀 How to Run

1. Clone or download this repository.
2. Compile the source file using a C++ compiler:

   ```bash
   g++ codemelli.cpp -o codemelli
   ```

3. Run the application:

   **Windows:**
   ```bash
   codemelli.exe
   ```

   **Linux / macOS:**
   ```bash
   ./codemelli
   ```

## 💻 Input Format
The first line contains an integer `A`, representing the number of national ID numbers to process.

The next `A` lines each contain a 10-digit national ID number.

## 📤 Output
For each input, the program prints one of the following:
- A recognized city name if the ID is valid and its prefix is supported.
- `Other` if the ID is valid but its prefix is not recognized.
- `Invalid` if the ID fails the check-digit validation.

## 🎓 Purpose
This project was developed as a university programming exercise to practise C++ programming, conditional statements, loops, string handling, and basic validation algorithms.
