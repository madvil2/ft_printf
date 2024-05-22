# ft_printf

This repository hosts a re-implementation of the standard C library function `printf`, known as `ft_printf`. This project was developed as part of the programming training at School 42. The aim is to deepen knowledge of C programming by manually handling variadic functions and learning to precisely replicate standard library functionalities.

## Project Overview

The `ft_printf` function mimics the behavior of the original `printf`, enabling formatted output by interpreting format specifiers embedded within strings. It handles a variety of format specifiers, including `%s` for strings, `%d` and `%i` for signed integers, `%u` for unsigned integers, `%x` and `%X` for hexadecimal numbers, `%c` for characters, `%p` for pointer addresses, and `%%` for a literal percent sign.

## Features

- Mimics the standard `printf` function from the C Standard Library.
- Supports multiple format specifiers.
- Error handling similar to `printf`, including returning the number of characters printed or a negative number if an error occurs.

## Requirements

- GCC compiler
- Standard C libraries

## Setup and Compilation

1. **Clone the repository**:
   ```sh
   git clone https://github.com/madvil2/ft_printf.git
   ```
2. **Navigate to the repository folder**:
   ```sh
   cd ft_printf
   ```
3. **Compile the library**:
   ```sh
   make
   ```
   This will compile the library and create `ft_printf.a`.

## Usage

To use `ft_printf` in your C projects, include the header file and link against the compiled library.

1. **Include the header**:
   ```c
   #include "ft_printf.h"
   ```
2. **Compile your project with `ft_printf`**:
   ```sh
   gcc your_c_files.c -L. -lft_printf -o your_program_name
   ```

## Testing

You can test the functionality of `ft_printf` using third-party testers, such as:

- [Francinette](https://github.com/xicodomingues/francinette.git)

Run the tester according to its documentation to ensure that all aspects of `ft_printf` work correctly.

## Contributions

Contributions are welcome! Please feel free to submit a pull request or open an issue if you find bugs or have suggestions for improvements.

## License

Distributed under the MIT License. See `LICENSE` for more information.

---

Make sure to replace placeholder URLs and instructions according to your actual repository details and personal GitHub username. This structured README will help users and potential contributors understand and use your `ft_printf` project effectively.
