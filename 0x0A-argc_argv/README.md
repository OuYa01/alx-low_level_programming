# 0x0A. C - argc, argv

## Description
This project focuses on understanding and using command-line arguments in C programs. By the end of this project, you will be able to manipulate arguments passed to `main`, understand the different prototypes of `main`, and handle unused variables correctly in C.

## Learning Objectives
By completing this project, you will:
- Learn how to use arguments passed to your program.
- Understand the two prototypes of `main` and their use cases.
- Learn how to handle unused parameters using `__attribute__((unused))` or `(void)`.

## Requirements
- Code is compiled using `gcc` on Ubuntu 20.04 LTS with flags:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- No global variables allowed.
- No more than 5 functions per file.
- Must follow the Betty coding style.
- Allowed editors: `vi`, `vim`, `emacs`.
- The standard library is allowed.
- Each file should end with a new line.
- A `main.h` file containing function prototypes must be included.

## Files & Tasks

### 0. It ain't what they call you, it's what you answer to
**File:** `0-whatsmyname.c`
- Prints the program's name, even after renaming it.
- Usage:
  ```sh
  ./mynameis
  ./mynewnameis  # if renamed
  ```

### 1. Silence is argument carried out by other means
**File:** `1-args.c`
- Prints the number of arguments passed to the program.
- Usage:
  ```sh
  ./nargs
  ./nargs hello world
  ```

### 2. The best argument against democracy is a five-minute conversation with the average voter
**File:** `2-args.c`
- Prints all arguments received, one per line.
- Usage:
  ```sh
  ./args "Hello, World!"
  ```

### 3. Neither irony nor sarcasm is argument
**File:** `3-mul.c`
- Multiplies two numbers and prints the result.
- If incorrect arguments are provided, prints `Error`.
- Usage:
  ```sh
  ./mul 3 4
  ./mul 10 -5
  ./mul    # Prints Error
  ```

### 4. To infinity and beyond
**File:** `4-add.c`
- Adds positive numbers and prints the result.
- If an invalid number is provided, prints `Error`.
- Usage:
  ```sh
  ./add 1 2 3 4
  ./add    # Prints 0
  ./add 5 hello  # Prints Error
  ```

### 5. Minimal Number of Coins for Change (Advanced)
**File:** `100-change.c`
- Calculates the minimum number of coins needed for change.
- Allowed coin values: 25, 10, 5, 2, 1 cents.
- Usage:
  ```sh
  ./change 99
  ./change -5   # Prints 0
  ./change      # Prints Error
  ```

## Usage
Clone this repository and compile the files using `gcc`:
```sh
$ git clone https://github.com/OuYa01/alx-low_level_programming.git
$ cd 0x0A-argc_argv
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o outputfile
$ ./outputfile
```

## Author
**Oussama laamri** - [GitHub Profile](https://github.com/OuYa01)

---
*Project from ALX Software Engineering Program.*


