# 🚀 Rush 02: Number-to-Words Converter

## 🌟 Overview
Welcome to **Rush 02**, a project completed during the Piscine at **42 Berlin**! 🎓 This was the final and most intense rush of the Piscine, giving us just **two days** to design and implement a working solution under tight deadlines. 

Our program converts **numbers into words**, handling inputs of various sizes and formatting them according to a predefined dictionary. This includes handling small numbers like `123` and scaling up to large ones like `1,000,000,000`. The solution showcases the power of **dynamic memory management**, **recursion**, and **team collaboration**.

---

## 🎮 How It Works
The program uses a **dictionary file** to map numbers to their corresponding words (e.g., `1: one`, `10: ten`). It reads this dictionary, validates the input, and efficiently converts the number to its word representation using **recursion** and **group handling**.

---

## 💻 Demo

1. **Compile the Program**  
   Use the provided Makefile to compile the program:
   ```bash
   make
   ```

2. **Run the Program**  
   Provide a valid number as input:
   ```bash
   ./rush 123456789
   ```

   **Output Example**  
   For `123456789`, the output will be:
   ```
   one hundred twenty three million four hundred fifty six thousand seven hundred eighty nine
   ```

---

## 🛠️ Features
### 🔑 Key Capabilities
- **Dynamic Dictionary Loading**: The dictionary is customizable (numbers.dict), allowing the program to handle various languages or formats.
- **Error Handling**: Validates input numbers and checks the dictionary for consistency.
- **Scalable**: Handles numbers ranging from single digits to quintillions and beyond.

---

## 🧠 How It Works
- **Dictionary Parsing**: The `dictionary.c` file parses the `numbers.dict` file into memory for quick lookups.
- **Input Validation**: The `validity.c` file ensures the input is a valid number.
- **Number Conversion**: The `word_converting.c` file handles the conversion logic, breaking the number into groups of three and recursively constructing the word representation.
- **Output**: The program builds and prints the result dynamically, respecting proper word spacing and grammar.

---

## 🌍 About the Project
This project was completed as part of the Piscine at 42 Berlin, under a strict 48-hour deadline.

### Meet the Team 👨‍💻👩‍💻
- **Ali Qeblawi**: Focused on number conversion logic and recursive implementation.
- **Felix Porzig**: Led the dictionary parsing and input validation modules.
- **Mukhammadsidik**: Enhanced error handling and ensured memory optimization.

We worked tirelessly as a team, dividing tasks strategically to meet the challenge's demands. Collaboration and clear communication were key to our success, as we faced immense time pressure while maintaining code quality and functionality.

---

## ⚠️ Limitations
- The program relies on a valid dictionary file (`numbers.dict`) for conversions.
- It assumes numbers are in base-10 and formatted correctly.
- Very large inputs may require additional optimization for performance.

---

## ✨ What We Learned
- **Time Management**: Prioritizing tasks and focusing on deliverables under tight deadlines.
- **Collaboration**: Dividing work effectively among team members and ensuring smooth integration of modules.
- **Dynamic Memory Management**: Handling pointers, memory allocation, and freeing resources efficiently.
- **Input Parsing and Validation**: Developing robust systems for handling user inputs and error scenarios.

---

## ❤️ Like What You See?
If you enjoyed this project or found it inspiring, feel free to star this repository ⭐ and share your thoughts! We’d love to connect with fellow developers and discuss our journey at 42 Berlin.

---

## 📁 Project Structure
- **dictionary.c**: Parses the dictionary file and stores key-value pairs.
- **validity.c**: Validates inputs and ensures they are properly formatted.
- **word_converting.c**: Handles the logic for converting numbers to words.
- **library.c**: Contains helper functions for string manipulation and output.
- **rush.h**: Header file defining shared structures and functions.
- **makefile**: Automates the build process for the project.
- **numbers.dict**: The dictionary file mapping numbers to words.
