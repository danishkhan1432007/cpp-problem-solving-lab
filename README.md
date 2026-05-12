# cpp-problem-solving-lab
This is the lab solved by me and the lab is created by the claude opus 4.6

#########
# Sum of Digits — C++ Program

A simple C++ program that takes a positive integer as input and calculates the **sum of its digits** using a `while` loop.

---

## 📋 Description

This program repeatedly extracts the last digit of a number using the modulus operator (`%`) and adds it to a running sum, then removes that digit using integer division (`/`). The loop continues until all digits have been processed.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits is : " << sum << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o sum_of_digits sum_of_digits.cpp
```

### Execute
```bash
./sum_of_digits
```

---

## 🧪 Example

```
Enter the number : 1234
Sum of digits is : 10
```

**Dry Run for input `1234`:**

| Iteration | num  | num % 10 | sum |
|-----------|------|----------|-----|
| 1         | 1234 | 4        | 4   |
| 2         | 123  | 3        | 7   |
| 3         | 12   | 2        | 9   |
| 4         | 1    | 1        | 10  |
| 5         | 0    | —        | Loop ends |

---

## ⚙️ How It Works

| Operation   | Purpose                              | Example             |
|-------------|--------------------------------------|---------------------|
| `num % 10`  | Extracts the last digit              | `1234 % 10 = 4`     |
| `num /= 10` | Removes the last digit               | `1234 / 10 = 123`   |
| `sum += ...`| Adds extracted digit to running sum  | `sum = 0 + 4 = 4`   |

---

## ⚠️ Common Mistake

Always initialize `sum` to `0`. Without initialization, it holds a **garbage value** from memory and produces wrong results.

```cpp
int num, sum;     // ❌ sum has garbage value
int num, sum = 0; // ✅ correct
```

---

## 📌 Concepts Used

- `while` loop
- Modulus operator (`%`)
- Integer division (`/`)
- Variable initialization

---

## 👤 Author

Danish

######
loops problem 3 :
        # Reverse a Number — C++ Program

A simple C++ program that takes a positive integer as input and prints it in **reverse order** using a `while` loop.

---

## 📋 Description

This program repeatedly extracts the last digit of a number using the modulus operator (`%`), builds the reversed number digit by digit, then removes the last digit using integer division (`/`). The loop continues until all digits have been processed.

---

## 💻 Code

```cpp
#include<iostream>
using namespace std;
int main(){
    int num, reversed = 0;
    cout << "Enter number that you want to make its reverse : ";
    cin >> num;
    while (num > 0){
        reversed = reversed * 10 + num % 10;  // add last digit to reversed
        num /= 10;                             // remove last digit
    }
    cout << "The number in reverse order is : " << reversed << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o reverse_number reverse_number.cpp
```

### Execute
```bash
./reverse_number
```

---

## 🧪 Example

```
Enter number that you want to make its reverse : 1234
The number in reverse order is : 4321
```

---

## 🔑 Key Line Explained

```cpp
reversed = reversed * 10 + num % 10;
```

| Part            | Purpose                                  | Example         |
|-----------------|------------------------------------------|-----------------|
| `num % 10`      | Extracts the last digit                  | `1234 % 10 = 4` |
| `reversed * 10` | Shifts existing digits left to make room | `4 * 10 = 40`   |
| `+ num % 10`    | Places the new digit in the empty spot   | `40 + 3 = 43`   |

---

## 🧠 Dry Run for input `1234`

| Step | reversed before | × 10 | + digit | reversed after |
|------|----------------|------|---------|----------------|
| 1    | 0              | 0    | 4       | 4              |
| 2    | 4              | 40   | 3       | 43             |
| 3    | 43             | 430  | 2       | 432            |
| 4    | 432            | 4320 | 1       | 4321           |
| 5    | —              | —    | —       | Loop ends      |

---

## ⚠️ Common Mistakes

Always initialize `reversed` to `0`. Without it, it holds a **garbage value** from memory.

```cpp
int reversed;     // ❌ garbage value
int reversed = 0; // ✅ correct
```

---

## 📌 Concepts Used

- `while` loop
- Modulus operator (`%`)
- Integer division (`/`)
- Variable initialization
- Building a number digit by digit

---

## 👤 Author

Danish

######

problem 4 of loops :
# Bank Balance Doubler — C++ Program

A real world C++ program that calculates how many years it takes for a bank balance to **double** with a **5% annual interest rate** using a `while` loop.

---

## 📋 Description

This program simulates a real bank savings account. The user enters an initial deposit amount and the program calculates the balance at the end of each year with 5% compound interest, stopping as soon as the balance doubles.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    double num;
    cout << "Enter the initial deposit amount: ";
    cin >> num;
    double original = num;
    int year = 1;
    while (num > 0){
        if (num >= original * 2){
            cout << "Your money has doubled!" << endl;
            cout << "Year " << year << " : " << num << endl;
            break;
        }
        else {
            num = num * 1.05;
            cout << "Year " << year << " : " << num << endl;
            year++;
        }
    }
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o bank_doubler bank_doubler.cpp
```

### Execute
```bash
./bank_doubler
```

---

## 🧪 Example

```
Enter the initial deposit amount: 1000

Year 1  : 1050
Year 2  : 1102.5
Year 3  : 1157.63
Year 4  : 1215.51
Year 5  : 1276.28
Year 6  : 1340.10
Year 7  : 1407.10
Year 8  : 1477.46
Year 9  : 1551.33
Year 10 : 1628.89
Year 11 : 1710.34
Year 12 : 1795.86
Year 13 : 1885.65
Year 14 : 1979.93
Year 15 : 2078.93
Your money has doubled!
```

---

## 🔑 Key Concepts Explained

**5% Interest Calculation:**
```
balance = balance * 1.05
```

| Version | Formula | Result |
|---------|---------|--------|
| Long | balance + balance * 0.05 | 1000 + 50 = 1050 |
| Short | balance * 1.05 | 1000 * 1.05 = 1050 |

Both are the same — `* 1.05` means keep 100% and add 5%.

---

**Doubling Condition:**
```cpp
double original = num;   // save the starting amount
if (num >= original * 2) // check if balance has doubled
```

We save the original amount separately because `num` changes every year.

---

## 🧠 Dry Run for input `1000`

| Year | Balance Before | × 1.05 | Balance After |
|------|---------------|--------|---------------|
| 1    | 1000.00       | × 1.05 | 1050.00       |
| 2    | 1050.00       | × 1.05 | 1102.50       |
| 3    | 1102.50       | × 1.05 | 1157.63       |
| ...  | ...           | ...    | ...           |
| 15   | 1979.93       | × 1.05 | 2078.93 ✅ doubled! |

---

## ⚠️ Common Mistakes

**1. Using `int` instead of `double`**
```cpp
int num;     // ❌ cuts off decimals e.g. 1102.5 becomes 1102
double num;  // ✅ keeps decimal values
```

**2. Comparing num with itself**
```cpp
if (num == num * 2)      // ❌ always false, never works
if (num >= original * 2) // ✅ compares with saved original
```

---

## 📌 Concepts Used

- `while` loop
- `if/else` condition
- `break` statement
- `double` data type
- Compound interest formula
- Variable initialization

---

## 🌍 Real World Connection

This program simulates the **Rule of 72** — a real financial concept that says:

```
Years to double = 72 / interest rate
Years to double = 72 / 5 = 14.4 years ≈ 15 years
```

Which matches our output of **15 years!**

---

## 👤 Author

Danish