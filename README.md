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

######

problem 5 in loops:
# Car Fuel Tracker — C++ Program

A real world C++ program that simulates a **car fuel gauge**, showing how much fuel remains after every 50 km until the car runs out of fuel using a `while` loop.

---

## 📋 Description

The user enters the current fuel level in the tank. The program then calculates and displays the remaining fuel after every 50 km, consuming 4 litres per 50 km (which equals 8 litres per 100 km), until the fuel reaches 0.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    int fuel;
    int distance = 50;
    cout << "Enter current fuel level: ";
    cin >> fuel;
    while (fuel > 0){
        fuel -= 4;
        cout << "After " << distance << " km the fuel level is " << fuel << " liters" << endl;
        distance += 50;
    }
    cout << "Car has run out the fuel" << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o car_fuel car_fuel.cpp
```

### Execute
```bash
./car_fuel
```

---

## 🧪 Example

```
Enter current fuel level: 60

After 50 km the fuel level is 56 liters
After 100 km the fuel level is 52 liters
After 150 km the fuel level is 48 liters
After 200 km the fuel level is 44 liters
After 250 km the fuel level is 40 liters
After 300 km the fuel level is 36 liters
After 350 km the fuel level is 32 liters
After 400 km the fuel level is 28 liters
After 450 km the fuel level is 24 liters
After 500 km the fuel level is 20 liters
After 550 km the fuel level is 16 liters
After 600 km the fuel level is 12 liters
After 650 km the fuel level is 8 liters
After 700 km the fuel level is 4 liters
After 750 km the fuel level is 0 liters
Car has run out the fuel
```

---

## 🔑 Key Concepts Explained

**Fuel consumption per 50 km:**
```
8 litres per 100 km
= 4 litres per 50 km
```

**Decrement first, then print:**
```cpp
fuel -= 4;       // subtract first ✅
cout << fuel;    // then print updated value ✅
```

This ensures the output always shows the correct remaining fuel.

---

## 🧠 Dry Run for input `20`

| Distance | Fuel Before | - 4 | Fuel After |
|----------|------------|-----|------------|
| 50 km    | 20         | -4  | 16         |
| 100 km   | 16         | -4  | 12         |
| 150 km   | 12         | -4  | 8          |
| 200 km   | 8          | -4  | 4          |
| 250 km   | 4          | -4  | 0          |
| —        | 0          | —   | Loop ends  |

---

## 📌 Concepts Used

- `while` loop
- Decrement operator (`-=`)
- Increment operator (`+=`)
- Variable tracking (distance, fuel)

---

## 🌍 Real World Connection

This program simulates how a real **car fuel gauge** works:
- Every 50 km the fuel drops by 4 litres
- The dashboard warns you when fuel hits 0
- Helps estimate how far you can travel on a full tank

---

## 👤 Author

Danish

######
problem 6 in loops :
# Student Marks Calculator — C++ Program

A real world C++ program that takes marks for 5 subjects as input and calculates the **total marks** and **average** using a `for` loop.

---

## 📋 Description

The user enters marks for each of the 5 subjects one by one. The program adds them up inside the loop and displays the total and average at the end. This is exactly how a school result system calculates your final grade.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    int marks;
    int total = 0;
    cout << "Please enter your (5) subject marks : \n";
    for(int i = 1; i <= 5; i++){
        cout << "Subject " << i << " marks: ";
        cin >> marks;
        total = total + marks;
    }
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << total / 5 << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o marks_calculator marks_calculator.cpp
```

### Execute
```bash
./marks_calculator
```

---

## 🧪 Example

```
Please enter your (5) subject marks :
Subject 1 marks: 85
Subject 2 marks: 90
Subject 3 marks: 78
Subject 4 marks: 92
Subject 5 marks: 88

Total marks: 433
Average marks: 86
```

---

## 🔑 Key Concepts Explained

**For loop doing two jobs at once:**
```cpp
for(int i = 1; i <= 5; i++){
    cin >> marks;       // takes input
    total += marks;     // adds to total
}
```

One loop handles both **input** and **addition** at the same time.

---

## 🧠 Dry Run

| i | marks | total       |
|---|-------|-------------|
| 1 | 85    | 0 + 85 = 85  |
| 2 | 90    | 85 + 90 = 175 |
| 3 | 78    | 175 + 78 = 253 |
| 4 | 92    | 253 + 92 = 345 |
| 5 | 88    | 345 + 88 = 433 |

**Average = 433 / 5 = 86**

---

## ⚠️ Common Mistakes

**1. Not initializing total**
```cpp
int total;     // ❌ garbage value causes wrong total
int total = 0; // ✅ always initialize to 0
```

**2. Using marks++ inside loop**
```cpp
marks++;               // ❌ adds 1 to every subject mark
total = total + marks; // ✅ just add marks directly
```

---

## 📌 Concepts Used

- `for` loop
- Variable initialization
- Taking input inside a loop
- Calculating total and average

---

## 🌍 Real World Connection

This is exactly how a **school result system** works:
- Enter marks for each subject
- System calculates total
- System calculates average
- Result is displayed on your report card

---

## 👤 Author

Danish

######

problem 7 in loops:
# Shop Billing System — C++ Program

A real world C++ program that calculates a customer's **total bill** and applies a **10% discount** if the total exceeds 5000 Rs using a `for` loop.

---

## 📋 Description

The user enters the number of items they are buying. The program then takes the price of each item one by one, calculates the total bill, and applies a 10% discount if the total is above 5000 Rs. This is exactly how a shopping mall billing system works.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    int item, price, total = 0;
    float discount;
    cout << "Enter the number of items you buy: ";
    cin >> item;
    for (int i = 1; i <= item; i++){
        cout << "Enter the item " << i << " price: ";
        cin >> price;
        total = total + price;
    }
    cout << "Total price: " << total << endl;
    if (total >= 5000){
        discount = total * 0.1;
        cout << "You get 10% discount on total price: " << discount << endl;
        cout << "Total price after discount: " << total - discount << endl;
    }
    else {
        cout << "No discount for you" << endl;
    }
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o shop_billing shop_billing.cpp
```

### Execute
```bash
./shop_billing
```

---

## 🧪 Example

**With Discount:**
```
Enter the number of items you buy: 3

Enter the item 1 price: 2000
Enter the item 2 price: 1500
Enter the item 3 price: 2500

Total price: 6000
You get 10% discount on total price: 600
Total price after discount: 5400
```

**Without Discount:**
```
Enter the number of items you buy: 2

Enter the item 1 price: 1000
Enter the item 2 price: 500

Total price: 1500
No discount for you
```

---

## 🔑 Discount Rules

| Total Bill | Discount | Example |
|------------|----------|---------|
| Above 5000 Rs | 10% off | 6000 - 600 = 5400 Rs |
| 5000 Rs or below | No discount | 1500 Rs stays 1500 Rs |

**Discount Calculation:**
```cpp
discount = total * 0.1;         // 10% of total
final    = total - discount;    // subtract discount
```

---

## 🧠 Dry Run for 3 items (2000, 1500, 2500)

| i | price | total          |
|---|-------|----------------|
| 1 | 2000  | 0 + 2000 = 2000 |
| 2 | 1500  | 2000 + 1500 = 3500 |
| 3 | 2500  | 3500 + 2500 = 6000 |

**Total = 6000 → above 5000 → 10% discount applies**
```
Discount = 6000 * 0.1 = 600
Final    = 6000 - 600 = 5400
```

---

## 📌 Concepts Used

- `for` loop
- `if/else` condition
- `float` for discount
- Variable initialization
- Taking input inside a loop

---

## 🌍 Real World Connection

This is exactly how a **shopping mall billing system** works:
- Cashier scans each item
- System adds up the total
- Discount is applied automatically if total exceeds a limit
- Final bill is printed on the receipt

---

## 👤 Author

Danish

######
problem 8 of loop:
# Student Pass/Fail Calculator — C++ Program

A real world C++ program that calculates how many students **passed** and **failed** in an exam and displays the **pass percentage** using a `for` loop.

---

## 📋 Description

The user enters the number of students in the class. The program then takes the marks of each student one by one, checks if they passed or failed based on a passing mark of 50, and displays the final result. This is exactly how a school result system works.

---

## 💻 Code

```cpp
#include<iostream>
using namespace std;
int main(){
    int student, marks, pass = 0, fail = 0;
    cout << "Enter the number of students in your class: ";
    cin >> student;
    for (int i = 1; i <= student; i++){
        cout << "Enter the marks of student " << i << ": ";
        cin >> marks;
        if (marks >= 50){
            pass++;
        }
        else {
            fail++;
        }
    }
    cout << "Total passed    : " << pass << endl;
    cout << "Total failed    : " << fail << endl;
    cout << "Pass percentage : " << (pass * 100) / student << "%" << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o pass_fail pass_fail.cpp
```

### Execute
```bash
./pass_fail
```

---

## 🧪 Example

```
Enter the number of students in your class: 5

Enter the marks of student 1: 78
Enter the marks of student 2: 45
Enter the marks of student 3: 90
Enter the marks of student 4: 38
Enter the marks of student 5: 65

Total passed    : 3
Total failed    : 2
Pass percentage : 60%
```

---

## 🔑 Key Concepts Explained

**Counting pass and fail:**
```cpp
if (marks >= 50){
    pass++;   // increment pass counter
}
else {
    fail++;   // increment fail counter
}
```

**Pass percentage:**
```cpp
(pass * 100) / student
// Example: (3 * 100) / 5 = 60%
```

---

## 🧠 Dry Run for 5 students (78, 45, 90, 38, 65)

| i | marks | pass | fail |
|---|-------|------|------|
| 1 | 78    | 1    | 0    |
| 2 | 45    | 1    | 1    |
| 3 | 90    | 2    | 1    |
| 4 | 38    | 2    | 2    |
| 5 | 65    | 3    | 2    |

**Pass percentage = (3 * 100) / 5 = 60%**

---

## ⚠️ Common Mistakes

**1. Not initializing pass and fail**
```cpp
int pass, fail;         // ❌ garbage value causes wrong count
int pass = 0, fail = 0; // ✅ always initialize to 0
```

**2. Storing student number instead of counting**
```cpp
pass = i;   // ❌ stores student number not count
pass++;     // ✅ correctly counts passed students
```

---

## 📌 Concepts Used

- `for` loop
- `if/else` condition
- Increment operator (`++`)
- Pass percentage calculation
- Variable initialization

---

## 🌍 Real World Connection

This is exactly how a **school result system** works:
- Teacher enters marks for each student
- System checks if marks are above passing mark
- System counts total passed and failed
- Pass percentage is calculated and shown on result card

---

## 👤 Author

Danish

######
problem 9 of loop concept:
# Mobile Data Billing System — C++ Program

A real world C++ program that calculates a customer's **total data usage** and **monthly bill** based on daily GB usage, with a warning if the limit is exceeded using a `for` loop.

---

## 📋 Description

The user enters the number of days and the data used each day in GB. The program calculates the total data consumed and the total bill at 50 Rs per GB. If total usage exceeds 30 GB, a warning is displayed. This is exactly how mobile network companies like Jazz, Zong, or Telenor calculate your monthly bill.

---

## 💻 Code

```cpp
#include<iostream>
using namespace std;
int main(){
    int day;
    double GB = 0, total = 0;
    cout << "Enter the number of days that user have used the Data(GB) price per day is 50Rs: ";
    cin >> day;
    for (int i = 1; i <= day; i++){
        cout << "Enter the number of GB used on day " << i << ": ";
        cin >> GB;
        total = total + GB;
    }
    cout << "Total Data Used : " << total << " GB " << endl;
    cout << "The total bill of your data usage is : " << total * 50 << " Rs " << endl;
    if (total > 30){
        cout << "Warning you have exceeded the 30 GB of the Data limit!" << endl;
    }
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o data_billing data_billing.cpp
```

### Execute
```bash
./data_billing
```

---

## 🧪 Example

**Within limit:**
```
Enter the number of days: 5

Enter the number of GB used on day 1: 3.5
Enter the number of GB used on day 2: 2.0
Enter the number of GB used on day 3: 4.5
Enter the number of GB used on day 4: 1.5
Enter the number of GB used on day 5: 2.0

Total Data Used : 13.5 GB
The total bill of your data usage is : 675 Rs
```

**Exceeding limit:**
```
Enter the number of days: 5

Enter the number of GB used on day 1: 8.0
Enter the number of GB used on day 2: 7.5
Enter the number of GB used on day 3: 6.0
Enter the number of GB used on day 4: 7.0
Enter the number of GB used on day 5: 6.5

Total Data Used : 35 GB
The total bill of your data usage is : 1750 Rs
Warning you have exceeded the 30 GB of the Data limit!
```

---

## 🔑 Key Concepts Explained

**Bill Calculation:**
```cpp
total * 50
// Example: 13.5 GB * 50 Rs = 675 Rs
```

**Data Limit Warning:**
```cpp
if (total > 30){
    cout << "Warning...";
}
```

---

## 🧠 Dry Run for 5 days (3.5, 2.0, 4.5, 1.5, 2.0)

| Day | GB used | total          |
|-----|---------|----------------|
| 1   | 3.5     | 0 + 3.5 = 3.5  |
| 2   | 2.0     | 3.5 + 2.0 = 5.5 |
| 3   | 4.5     | 5.5 + 4.5 = 10.0 |
| 4   | 1.5     | 10.0 + 1.5 = 11.5 |
| 5   | 2.0     | 11.5 + 2.0 = 13.5 |

**Total = 13.5 GB → Bill = 13.5 * 50 = 675 Rs → Under 30 GB limit ✅**

---

## 📌 Concepts Used

- `for` loop
- `double` data type
- `if` condition
- Variable initialization
- Taking input inside a loop

---

## 🌍 Real World Connection

This is exactly how **mobile network companies** calculate your bill:
- Your phone tracks data used each day
- At end of month total is calculated
- Bill is generated based on usage
- Warning is sent if you exceed your package limit

---

## 👤 Author

Danish

problem 10 in loop concept :
# Cricket Team Score Tracker — C++ Program

A real world C++ program that tracks the **scores of 11 cricket players**, finds the **highest scorer**, calculates **total runs**, and counts players with a **good innings (30+ runs)** using a `for` loop.

---

## 📋 Description

The user enters the runs scored by each of the 11 players. The program calculates the total team score, identifies the highest scorer and their player number, and counts how many players scored 30 or more runs. This is exactly how PCB tracks team performance after a match.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    int player = 11, score, total = 0, highest = 0, topplayer = 0, goodinings = 0;
    for (int i = 1; i <= player; i++){
        cout << "Enter the score of player " << i << ": ";
        cin >> score;
        total = total + score;
        if (score > highest){
            highest = score;
            topplayer = i;
        }
        if (score >= 30){
            goodinings++;
        }
    }
    cout << "Total score of the team is: " << total << endl;
    cout << "Highest score of the team player " << topplayer << " is : " << highest << endl;
    cout << "Number of good innings (30 or more runs) is: " << goodinings << endl;
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o cricket_tracker cricket_tracker.cpp
```

### Execute
```bash
./cricket_tracker
```

---

## 🧪 Example

```
Enter the score of player 1: 45
Enter the score of player 2: 12
Enter the score of player 3: 78
Enter the score of player 4: 0
Enter the score of player 5: 33
Enter the score of player 6: 21
Enter the score of player 7: 56
Enter the score of player 8: 9
Enter the score of player 9: 15
Enter the score of player 10: 42
Enter the score of player 11: 3

Total score of the team is: 314
Highest score of the team player 3 is : 78
Number of good innings (30 or more runs) is: 4
```

---

## 🔑 Key Concepts Explained

**Finding the highest scorer:**
```cpp
if (score > highest){
    highest = score;    // update highest runs
    topplayer = i;      // save player number
}
```
Every time a player scores more than the current highest, we update both the score and the player number.

**Counting good innings:**
```cpp
if (score >= 30){
    goodinings++;
}
```
Every player who scores 30 or more is counted as a good innings.

---

## 🧠 Dry Run (first 4 players)

| Player | Score | highest | topplayer | goodinings |
|--------|-------|---------|-----------|------------|
| 1      | 45    | 45      | 1         | 1          |
| 2      | 12    | 45      | 1         | 1          |
| 3      | 78    | 78      | 3         | 2          |
| 4      | 0     | 78      | 3         | 2          |

---

## 📌 Concepts Used

- `for` loop
- `if` conditions inside a loop
- Tracking highest value and its index
- Increment operator (`++`)
- Variable initialization

---

## 🌍 Real World Connection

This is exactly how **PCB and cricket scorecards** work:
- Each player's runs are recorded
- Total team score is calculated
- Man of the match is the highest scorer
- Good innings are tracked for player performance ratings

---

## 👤 Author

Danish

######

problem 11 of loops concept:
# ATM PIN System — C++ Program

A real world C++ program that simulates an **ATM PIN verification system** using a `do while` loop. The user keeps entering their PIN until the correct one is entered.

---

## 📋 Description

The program asks the user to enter their ATM PIN. If the PIN is wrong, it shows an error message and asks again. If the PIN is correct, it grants access and stops. This is exactly how a real ATM machine works.

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;
int main(){
    int pin;
    do {
        cout << "Please sir enter your ATM PIN: ";
        cin >> pin;
        if (pin != 1234){
            cout << "Your PIN is wrong \n";
        }
        else {
            cout << "Access granted! Welcome \n";
            break;
        }
    } while(true);
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o atm_pin atm_pin.cpp
```

### Execute
```bash
./atm_pin
```

---

## 🧪 Example

**Wrong PIN then correct PIN:**
```
Please sir enter your ATM PIN: 1111
Your PIN is wrong

Please sir enter your ATM PIN: 2222
Your PIN is wrong

Please sir enter your ATM PIN: 1234
Access granted! Welcome
```

**Correct PIN first try:**
```
Please sir enter your ATM PIN: 1234
Access granted! Welcome
```

---

## 🔑 Key Concepts Explained

**Why do while and not while?**

The PIN must be entered **at least once** before checking — that is exactly what `do while` is for:

```
do   → ask for PIN first
while → then check if we should ask again
```

**while(true) with break:**
```cpp
do {
    // code
} while(true);  // loop forever
```
This keeps looping until `break` is hit when correct PIN is entered. A clean and professional approach.

---

## 🧠 Dry Run

| Attempt | PIN entered | Correct? | Action |
|---------|------------|----------|--------|
| 1       | 1111       | ❌ No    | Show error, loop again |
| 2       | 2222       | ❌ No    | Show error, loop again |
| 3       | 1234       | ✅ Yes   | Grant access, break |

---

## 📌 Concepts Used

- `do while` loop
- `if/else` condition
- `break` statement
- PIN verification logic

---

## 🌍 Real World Connection

This is exactly how a real **ATM machine** works:
- ATM always asks for PIN at least once
- Wrong PIN shows error and asks again
- Correct PIN grants access to account
- (Real ATMs lock after 3 wrong attempts)

---

## 👤 Author

Danish

######

problem 12 of loop concept:
# Restaurant Menu System — C++ Program

A real world C++ program that simulates a **restaurant ordering system** using a `do while` loop and `switch` statement. The menu keeps showing until the customer chooses to exit.

---

## 📋 Description

The program displays a restaurant menu and asks the customer to select an item. The selected item is confirmed and the menu is shown again until the customer selects exit. This is exactly how a restaurant ordering system works.

---

## 💻 Code

```cpp
#include<iostream>
using namespace std;
int main(){
    int choice;
    cout << "Welcome to the restaurant sir, the menu is below\n";
    cout << " 1. Burger \t 500 Rs\n 2. Pizza \t 800 Rs\n 3. Fries \t 200 Rs\n 4. Exit\n";
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                cout << "You ordered the Burger!";
                break;
            case 2:
                cout << "You ordered the Pizza!";
                break;
            case 3:
                cout << "You ordered the Fries!";
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while(choice != 4);
    cout << "Thank you! Goodbye!\n";
    return 0;
}
```

---

## ▶️ How to Run

### Compile
```bash
g++ -o restaurant_menu restaurant_menu.cpp
```

### Execute
```bash
./restaurant_menu
```

---

## 🧪 Example

```
Welcome to the restaurant sir, the menu is below
 1. Burger   500 Rs
 2. Pizza    800 Rs
 3. Fries    200 Rs
 4. Exit

Enter your choice: 1
You ordered the Burger!

Enter your choice: 3
You ordered the Fries!

Enter your choice: 2
You ordered the Pizza!

Enter your choice: 4
Exiting...
Thank you! Goodbye!
```

---

## 🔑 Key Concepts Explained

**Why do while and not while?**

The menu must be shown **at least once** before checking the choice — that is exactly what `do while` is for:

```
do   → show menu and take input first
while → then check if user wants to exit
```

**Keeping the menu alive:**
```cpp
} while(choice != 4);  // keep looping until user selects 4
```

**Thank you message outside the loop:**
```cpp
} while(choice != 4);
cout << "Thank you! Goodbye!\n";  // only prints after exit
```

---

## 🧠 Dry Run

| Choice | Item ordered | Loop continues? |
|--------|-------------|-----------------|
| 1      | Burger      | ✅ Yes           |
| 3      | Fries       | ✅ Yes           |
| 2      | Pizza       | ✅ Yes           |
| 4      | Exit        | ❌ No, goodbye!  |

---

## 📌 Concepts Used

- `do while` loop
- `switch` statement
- `break` statement
- Menu driven program logic

---

## 🌍 Real World Connection

This is exactly how a **restaurant ordering system** works:
- Menu is always shown at least once
- Customer keeps ordering until they are done
- Exit option ends the session
- Goodbye message is shown at the end

---

## 👤 Author

Danish