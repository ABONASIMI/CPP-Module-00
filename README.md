*This project has been created as part of the 42 curriculum by mnasimi.*

# CPP Module 00

An introduction to C++ and object-oriented programming through three small exercises, written in compliance with the C++98 standard.

## About the project

CPP Module 00 is the first C++ module of the 42 Common Core. It introduces the transition from procedural C programming to C++ by covering classes, objects, encapsulation, member functions, constructors, destructors, static members, and standard input/output streams.

The module covers the following concepts:

- Classes and objects
- Public and private members
- Constructors and destructors
- Initialization lists
- Static data members and member functions
- `const` member functions
- Header files and include guards
- `std::string` and `std::getline`
- Stream formatting with `<iomanip>`
- Basic input validation
- C++98 compilation and Makefiles

## Exercises

### ex00 — Megaphone

A command-line program that converts every argument to uppercase and prints the result.

```bash
./megaphone "Hello World"
```

Output:

```text
HELLO WORLD
```

When no arguments are provided, the program prints:

```text
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### ex01 — My Awesome PhoneBook

An interactive phonebook built with `PhoneBook` and `Contact` classes. It stores up to eight contacts, each containing:

- First name
- Last name
- Nickname
- Phone number
- Darkest secret

The program accepts three commands:

| Command | Description |
|:--------|:------------|
| `ADD` | Add a new contact. Empty fields are rejected. |
| `SEARCH` | List saved contacts and display the full details of a selected entry. |
| `EXIT` | Close the program. All contacts are lost. |

The contact list is displayed in columns ten characters wide. Longer values are shortened and end with a period. Once the phonebook is full, each new contact replaces the oldest one.

### ex02 — The Job of Your Dreams

A reconstruction of the missing `Account` class implementation based on the supplied header, test program, and reference output.

The implementation manages both individual account state and class-wide statistics, including:

- Account creation and closure
- Deposits and withdrawals
- Rejected withdrawals when funds are insufficient
- Per-account operation counters
- Global account, balance, deposit, and withdrawal counters
- Timestamped activity logs

## Project structure

```text
CPP-Module-00/
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
├── ex01/
│   ├── Contact.cpp
│   ├── Contact.hpp
│   ├── Makefile
│   ├── PhoneBook.cpp
│   ├── PhoneBook.hpp
│   └── main.cpp
├── ex02/
│   ├── Account.cpp
│   ├── Account.hpp
│   ├── Makefile
│   └── tests.cpp
└── README.md
```

## Requirements

- A C++ compiler with C++98 support
- GNU Make

Every exercise is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Installation

Clone the repository:

```bash
git clone https://github.com/ABONASIMI/CPP-Module-00.git
cd CPP-Module-00
```

Each exercise has its own Makefile and must be compiled separately.

## Usage

### Megaphone

```bash
cd ex00
make
./megaphone "Hello World"
```

### PhoneBook

```bash
cd ex01
make
./phonebook
```

At the prompt, enter `ADD`, `SEARCH`, or `EXIT`.

### Account

```bash
cd ex02
make
./account
```

Timestamps in the output depend on the time at which the program is run.

## Makefile targets

The following rules are available in every exercise:

| Command | Description |
|:--------|:------------|
| `make` | Build the executable. |
| `make clean` | Remove object files. |
| `make fclean` | Remove object files and the executable. |
| `make re` | Rebuild the project from scratch. |

## Resources

- [C++ reference](https://en.cppreference.com/)
- [`std::string` reference](https://cplusplus.com/reference/string/string/)
- [`<iomanip>` reference](https://cplusplus.com/reference/iomanip/)
- [C++ input/output library](https://en.cppreference.com/w/cpp/io)
- [C++ classes](https://en.cppreference.com/w/cpp/language/classes)
- [Constructors and initialization](https://en.cppreference.com/w/cpp/language/constructor)
- [Static members](https://en.cppreference.com/w/cpp/language/static)
- 42 C++ Module 00 subject and Intranet documentation

## AI usage

AI was used as a learning and review tool during this project. It assisted with:

- Explaining C++ concepts such as classes, constructors, destructors, static members, references, `const`, and input/output streams
- Clarifying the difference between `std::cin` and `std::getline`
- Reviewing code and identifying potential issues
- Comparing the implementation with the subject requirements
- Explaining compiler errors and input-handling problems
- Understanding the expected `Account` behavior from `Account.hpp`, `tests.cpp`, and the reference log
- Reviewing the final project structure and testing strategy
- Preparing this README

All project code was reviewed and tested using the required C++98 compiler flags.

## Author

**Mohamad Abobaker Nasimi**

- 42 login: `mnasimi`
- GitHub: [ABONASIMI](https://github.com/ABONASIMI)
