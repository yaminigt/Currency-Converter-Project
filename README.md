## Project Title: **Currency Converter**

---

### **Project Description:**

This project is a simple **Currency Converter** application implemented in **C++**. The program allows users to convert an amount of money from one currency to another using predefined exchange rates. The exchange rates are stored in an unordered map, and the user can select both the source and target currencies from a list.

The application continuously asks the user if they want to perform another conversion, and displays the converted amount with two decimal precision.

---

### **Features:**

1. **Currency Conversion:**
   - Converts a specified amount of one currency to another using predefined exchange rates.
   - Supports conversions between multiple currencies such as USD, EUR, INR, GBP, JPY, and AUD.
2. **User-Friendly Interface:**
   - The program displays a list of available currencies and prompts the user to select source and target currencies.
   - The user enters the amount to be converted, and the program performs the conversion.
3. **Error Handling:**
   - Checks if the user's input for currency choices is valid.
   - Returns a message if conversion fails due to invalid currency selection.
4. **Reusability:**
   - After completing a conversion, the program asks if the user wants to perform another conversion.
5. **Precision:**
   - The converted amount is displayed with two decimal places for clarity.

---

### **Technologies Used:**

- **C++ Programming Language**
- **Standard Template Library (STL):**
  - `unordered_map` for storing currency exchange rates.
  - `vector` for storing the list of available currencies.
- **Input/Output (I/O) Operations:**
  - User input is taken through the console to select currencies and the amount to convert.
  - Output is displayed in the console, formatted with two decimal precision.

---

### **How It Works:**

1. The program starts by displaying the available currencies with their respective numbers.
2. The user selects the source and target currencies by entering the corresponding number.
3. The user enters the amount they wish to convert.
4. The program calculates the conversion based on predefined exchange rates stored in an unordered map.
5. The converted amount is displayed with two decimal precision.
6. The program asks the user if they want to perform another conversion. If they choose 'yes', the process repeats. If they choose 'no', the program exits.

---

### **Steps to Run the Project:**

1. **Clone/Download the Code:**
   - Clone or download the project from the repository.

2. **Compile the Program:**
   - Open the terminal/command prompt and navigate to the project folder.
   - Use a C++ compiler to compile the code. For example:
     ```
     g++ -o currency_converter currency_converter.cpp
     ```

3. **Run the Program:**
   - Once compiled, run the program:
     ```
     ./currency_converter
     ```

4. **Follow the Prompts:**
   - The program will prompt you to select source and target currencies and input the amount to convert.

---

### **Example Usage:**

1. **Available Currencies:**
USD
EUR
INR
GBP
JPY


2. **User Input:**
- Select the source currency (1 for USD).
- Select the target currency (2 for EUR).
- Enter the amount (e.g., 100).

3. **Output:**
Converted Amount: 100 USD = 85.00 EUR


4. **Continue or Exit:**
Do you want to perform another conversion? (y/n): y

