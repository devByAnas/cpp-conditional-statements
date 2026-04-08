# 🔀 Control Flow in C++ — Complete Guide

> **if, else, if-else, if-else if, nested if-else, switch-case, break, continue**

Control flow statements program ka execution control karte hain — yani decide karte hain ke code kab, kahan aur kaise chalega.

---

## 📌 Table of Contents

1. [if Statement](#1-if-statement)
2. [if-else Statement](#2-if-else-statement)
3. [if-else if-else (Ladder)](#3-if-else-if-else-ladder)
4. [Nested if-else](#4-nested-if-else)
5. [switch-case Statement](#5-switch-case-statement)
6. [break Statement](#6-break-statement)
7. [continue Statement](#7-continue-statement)
8. [Comparison Table](#-comparison-table)
9. [Combined Practice Example](#-combined-practice-example)

---

## 1. `if` Statement

Sirf **ek condition** check karta hai. Agar condition **true** ho to block chalega, warna kuch nahi hoga.

### Syntax:
```cpp
if (condition) {
    // yeh code tab chalega jab condition true ho
}
```

### Example:
```cpp
int age = 20;

if (age >= 18) {
    cout << "Aap vote de sakte hain!" << endl;
}
// Output: Aap vote de sakte hain!
```

### Flow:
```
condition true?
     YES  -->  block execute karo
     NO   -->  skip karo, aage jao
```

---

## 2. `if-else` Statement

Do options mein se **ek choose** karta hai.
- Condition **true** to pehla block
- Condition **false** to `else` block

### Syntax:
```cpp
if (condition) {
    // condition true ho to
} else {
    // condition false ho to
}
```

### Example:
```cpp
int marks = 45;

if (marks >= 50) {
    cout << "Pass!" << endl;
} else {
    cout << "Fail! Mehnat karo." << endl;
}
// Output: Fail! Mehnat karo.
```

### Flow:
```
condition true?
     YES  -->  if block chalao
     NO   -->  else block chalao
```

---

## 3. `if-else if-else` (Ladder)

**Multiple conditions** check karne ke liye — upar se neeche ek ek condition check hoti hai, jo pehle true ho wahi chalega.

### Syntax:
```cpp
if (condition1) {
    // condition1 true
} else if (condition2) {
    // condition2 true
} else if (condition3) {
    // condition3 true
} else {
    // koi bhi true nahi
}
```

### Example:
```cpp
int score = 75;

if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else if (score >= 70) {
    cout << "Grade: C" << endl;
} else if (score >= 60) {
    cout << "Grade: D" << endl;
} else {
    cout << "Grade: F" << endl;
}
// Output: Grade: C
```

### Flow:
```
condition1 true? --> chalao  STOP
     NO
condition2 true? --> chalao  STOP
     NO
condition3 true? --> chalao  STOP
     NO
else block       --> chalao
```

---

## 4. `Nested if-else`

`if-else` ke **andar** doosra `if-else` — matlab ek condition ke andar aur conditions check karna.

### Syntax:
```cpp
if (condition1) {
    if (condition2) {
        // dono true hain
    } else {
        // sirf condition1 true hai
    }
} else {
    if (condition3) {
        // sirf condition3 true hai
    } else {
        // koi bhi true nahi
    }
}
```

### Example 1 — Login System:
```cpp
string username = "admin";
string password = "1234";

if (username == "admin") {
    cout << "Username sahi hai." << endl;

    if (password == "1234") {
        cout << "Password bhi sahi! Login successful." << endl;
    } else {
        cout << "Password galat hai!" << endl;
    }

} else {
    cout << "Username nahi mila!" << endl;
}

// Output:
// Username sahi hai.
// Password bhi sahi! Login successful.
```

### Example 2 — Number Positive/Negative/Zero:
```cpp
int num = -7;

if (num != 0) {
    if (num > 0) {
        cout << num << " positive number hai." << endl;
    } else {
        cout << num << " negative number hai." << endl;
    }
} else {
    cout << "Number zero hai." << endl;
}
// Output: -7 negative number hai.
```

### Example 3 — Teeno mein se Bara Dhundhna:
```cpp
int a = 10, b = 20, c = 15;

if (a > b) {
    if (a > c) {
        cout << "A sab se bara hai." << endl;
    } else {
        cout << "C sab se bara hai." << endl;
    }
} else {
    if (b > c) {
        cout << "B sab se bara hai." << endl;
    } else {
        cout << "C sab se bara hai." << endl;
    }
}
// Output: B sab se bara hai.
```

### Example 4 — Teen Levels Deep:
```cpp
int marks = 85;
bool attendance = true;

if (marks >= 50) {
    if (attendance == true) {
        if (marks >= 80) {
            cout << "Distinction ke saath Pass!" << endl;
        } else {
            cout << "Pass!" << endl;
        }
    } else {
        cout << "Attendance kam hai, detained!" << endl;
    }
} else {
    cout << "Marks kam hain, Fail!" << endl;
}
// Output: Distinction ke saath Pass!
```

> **Tip:** Nested if-else zyada gehri mat banao (3 levels se zyada confusing ho jaati hai). Aise cases mein functions use karo.

---

## 5. `switch-case` Statement

Ek variable ki **multiple fixed values** check karne ke liye. `if-else if` se zyada clean aur readable hota hai.

### Syntax:
```cpp
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // koi case match na ho to
}
```

### Example 1 — Din ka Naam:
```cpp
int day = 4;

switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day!" << endl;
}
// Output: Thursday
```

### Example 2 — Simple Calculator:
```cpp
char op = '+';
int a = 10, b = 5;

switch (op) {
    case '+':
        cout << "Result: " << a + b << endl;
        break;
    case '-':
        cout << "Result: " << a - b << endl;
        break;
    case '*':
        cout << "Result: " << a * b << endl;
        break;
    case '/':
        cout << "Result: " << a / b << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
}
// Output: Result: 15
```

### Fall-Through (break na ho to kya hoga):
```cpp
int x = 2;

switch (x) {
    case 1:
        cout << "One" << endl;
    case 2:
        cout << "Two" << endl;    // yahan se shuru
    case 3:
        cout << "Three" << endl;  // yeh bhi chal gaya!
    default:
        cout << "Default" << endl; // yeh bhi!
}
// Output:
// Two
// Three
// Default
```
> `break` na hone se agli cases bhi chali gayi — ise **fall-through** kehte hain. Yeh aksar ek bug hota hai!

---

## 6. `break` Statement

Loop ya `switch` ko **turant band** karta hai aur program switch/loop ke baad wali line par jump karta hai.

### Loop mein break:
```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 6) {
        cout << "6 mila, loop band!" << endl;
        break;
    }
    cout << i << " ";
}
// Output: 1 2 3 4 5 6 mila, loop band!
```

### while loop mein break:
```cpp
int i = 0;
while (true) {   // infinite loop
    i++;
    if (i == 5) break;  // yahan band hoga
    cout << i << " ";
}
// Output: 1 2 3 4
```

### Nested loop mein break (sirf inner loop band hota hai):
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (j == 2) break;  // sirf andar wali loop band
        cout << i << "-" << j << "  ";
    }
    cout << endl;
}
// Output:
// 1-1
// 2-1
// 3-1
```

---

## 7. `continue` Statement

Current **iteration skip** karta hai aur loop agla number pe chali jaati hai. Loop **band nahi** hoti!

### Example — Odd Numbers print karo:
```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue;  // even skip
    }
    cout << i << " ";
}
// Output: 1 3 5 7 9
```

### Example — 5 ko skip karo:
```cpp
for (int i = 1; i <= 8; i++) {
    if (i == 5) {
        cout << "[5 skip] ";
        continue;
    }
    cout << i << " ";
}
// Output: 1 2 3 4 [5 skip] 6 7 8
```

### break vs continue — Farq samjho:
```cpp
// BREAK — loop poori band kar deta hai
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    cout << i << " ";
}
// Output: 1 2

// CONTINUE — sirf woh ek step skip karta hai
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
// Output: 1 2 4 5
```

---

## 📊 Comparison Table

| Statement         | Kaam kya karta hai                               | Kahan use hota hai        |
|-------------------|--------------------------------------------------|---------------------------|
| `if`              | Ek condition check karta hai                     | Har jagah                 |
| `if-else`         | Do options mein se ek choose karta hai           | Har jagah                 |
| `if-else if`      | Multiple conditions ek ek check karta hai        | Har jagah                 |
| `nested if-else`  | Condition ke andar condition check karta hai     | Complex decisions         |
| `switch-case`     | Ek value ko multiple fixed cases se milata hai   | Fixed values (int, char)  |
| `break`           | Loop ya switch turant band karta hai             | Loop, switch mein         |
| `continue`        | Current iteration skip karta hai                | Sirf loops mein           |

---

## 🧪 Combined Practice Example

Yeh program sab cheezein ek saath use karta hai:

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "=== Number Analyzer (1 to 20) ===" << endl << endl;

    for (int i = 1; i <= 20; i++) {

        // BREAK: 16 par loop band
        if (i == 16) {
            cout << endl << "16 aa gaya, loop band!" << endl;
            break;
        }

        // CONTINUE: 10 skip karo
        if (i == 10) {
            cout << "[10-skip] ";
            continue;
        }

        // NESTED IF-ELSE: pehle zero check, phir even/odd
        if (i != 0) {
            if (i % 2 == 0) {

                // SWITCH: even numbers categorize karo
                switch (i % 4) {
                    case 0:
                        cout << i << "(4ka-guna) ";
                        break;
                    case 2:
                        cout << i << "(even) ";
                        break;
                }

            } else {

                // IF-ELSE IF: odd numbers categorize karo
                if (i % 15 == 0) {
                    cout << i << "(FizzBuzz) ";
                } else if (i % 3 == 0) {
                    cout << i << "(Fizz) ";
                } else if (i % 5 == 0) {
                    cout << i << "(Buzz) ";
                } else {
                    cout << i << "(odd) ";
                }
            }
        }
    }

    cout << endl << endl << "Program khatam! Done." << endl;
    return 0;
}
```

### Output:
```
=== Number Analyzer (1 to 20) ===

1(odd) 2(even) 3(Fizz) 4(4ka-guna) 5(Buzz) 6(even) 7(odd) 8(4ka-guna)
9(Fizz) [10-skip] 11(odd) 12(4ka-guna) 13(odd) 14(even) 15(FizzBuzz)

16 aa gaya, loop band!

Program khatam! Done.
```

---

## 💡 Important Tips

| Karo                                             | Mat Karo                                      |
|--------------------------------------------------|-----------------------------------------------|
| `switch` mein har case ke baad `break` likho    | Nested if-else ko 3 levels se zyada mat banao |
| Nested if-else ki jagah functions use karo      | `switch` mein float/string use mat karo       |
| `continue` se code clean rakho                  | Infinite loop mein `break` bhoolna            |
| Conditions clearly likhain                      | Ek hi `if` mein zyada conditions mat daalo    |

---

## 👨‍💻 Author
> devByAnas