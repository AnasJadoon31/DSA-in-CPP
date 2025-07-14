# 📦 Modular C++ Fundamentals – DSA Starter Project

A modular C++ project built with CLion and CMake, demonstrating foundational programming concepts such as number theory, bit manipulation, and menu-driven execution.

Ideal for beginners transitioning from single-file scripts to real-world modular C++ development.

---

## 📁 Project Structure
```
.
├── CMakeLists.txt
├── main.cpp
├── modules/
│ ├── binary_to_decimal.h / binary_to_decimal.cpp
│ ├── decimal_to_binary.h / decimal_to_binary.cpp
│ ├── fib.h / fib.cpp
│ ├── ncr.h / ncr.cpp
│ ├── power_of_two.h / power_of_two.cpp
│ ├── prime.h / prime.cpp
│ ├── reverse_integer.h / reverse_integer.cpp
│ ├── sod.h / sod.cpp
│ └── ... (more to come)
└── README.md
```

Each feature or function (e.g. prime check, digit sum, Fibonacci) is encapsulated into its own header/source pair. Clean, extensible, and easy to maintain.

---

## 🛠️ Tech Stack

| Tool | Role |
|------|------|
| 🧠 C++17 | Language |
| 🧱 CLion | IDE |
| ⚙️ CMake | Build System |
| 🧪 Google Test *(planned)* | Unit Testing |
| 🌐 GitHub | Version Control / Portfolio |

---

## 🚀 Features

🔹 Clean modular codebase using header/source separation
🔹 CMake-based cross-platform compilation
🔹 Interactive menu-driven CLI application
🔹 Beginner-friendly structure for learning DSA
🔹 Designed for future extensions and scaling

---

## 🧪 Modules Implemented

| Module | Description |
|--------|-------------|
| Sum of Digits | Computes sum of all digits in an integer |
| Prime Check | Returns whether a number is prime |
| Fibonacci Generator | Computes Nth term of Fibonacci |
| Binary Conversion | Converts decimal to binary |
| ... | More algorithms coming soon |

---

## 🧠 Learning Objectives

✅ Understand modular programming in C++  
✅ Use `#include`, header guards, and separation of concerns  
✅ Manage C++ projects with CMake  
✅ Organize a codebase for real-world scale  
✅ Use GitHub as a public coding journal  

---

## 🧾 How to Run

1. Clone the repository:
   
   ```bash
   git clone https://github.com/your-username/modular-cpp-fundamentals.git
   cd modular-cpp-fundamentals

3. Open with CLion (recommended) or use CMake manually:
   
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ./ModularCppDSA
5. Follow the interactive CLI prompts in main.cpp.

## 🛣️ Roadmap

1. Modular structure with CMake
2. Add unit tests using Google Test
3. Dynamic memory (pointers, heap)
4. File I/O support
5. Recursive algorithms
6. STL integration
7. Sorting and searching modules
8. Data structures: Stack, Queue, Linked List

 ## 🤝 Contributing
 
Contributions, bug reports, and ideas are welcome!
Feel free to open a PR or Issue if you want to suggest improvements or add new modules.

## 📜 License

This project is licensed under the MIT License.
Use it, modify it, learn from it — no strings attached.

## ✍️ Author

Muhammad Anas

🚀 CS Student

🧠 Aspiring AI Systems Engineer | C++ Practitioner

📓 Day 04 of my "Build Deep First" Journey

