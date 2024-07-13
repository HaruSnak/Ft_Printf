<img src="readme/printf.png" alt="printf" width="900"/>

# Ft_Printf
ft_printf is a reimplementation of the standard printf function of the C language, created as part of the school 42 curriculum. It allows, like printf, to display formatted text on the standard output following precise format specifiers.

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

## 📒 Index

- [About](#about)
- [Installation](#installation)
- [Development](#development)
  - [File Structure](#file-structure)
- [Notes](#notes)
- [Credits](#credits)

## About
### **Printf conversions:**

* *%c Prints a single character.*
* *%s Prints a string (as defined by the common C convention).*
* *%p The void * pointer argument has to be printed in hexadecimal format.*
* *%d Prints a decimal (base 10) number.*
* *%i Prints an integer in base 10.*
* *%u Prints an unsigned decimal (base 10) number.*
* *%x Prints a number in hexadecimal (base 16) lowercase format.*
* *%X Prints a number in hexadecimal (base 16) uppercase format.*
* *%% Prints a percent sign.*

## Installation
```bash
# Clone this repository
$ git clone https://github.com/HaruSnak/Ft_Printf.git

# Go into the repository
$ cd Ft_Printf

# To compile the program
$ make

# Allows you to do a complete cleaning of your construction environment
$ make fclean # Or make clean
```

## Development

### File Structure

```
.
└── 📁printf
    └── Makefile
    └── README.md
    └── ft_conv_primary.c
    └── ft_conv_specifies.c
    └── ft_conv_suit.c
    └── ft_printf.c
    └── ft_printf.h
    └── ft_putchar.c
    └── ft_putchar_fd.c
    └── ft_putnbr.c
    └── ft_putstr.c
    └── ft_strlen.c
```

## Notes
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

## Credits

Below you will find the links used for this project:

- [Norm 42](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- [Printf in C](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)

[contributors-shield]: https://img.shields.io/github/contributors/HaruSnak/Ft_Printf.svg?style=for-the-badge
[contributors-url]: https://github.com/HaruSnak/Ft_Printf/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HaruSnak/Ft_Printf.svg?style=for-the-badge
[forks-url]: https://github.com/HaruSnak/Ft_Printf/network/members
[stars-shield]: https://img.shields.io/github/stars/HaruSnak/Ft_Printf.svg?style=for-the-badge
[stars-url]: https://github.com/HaruSnak/Ft_Printf/stargazers
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/Ft_Printf.svg?style=for-the-badge
[issues-url]: https://github.com/HaruSnak/Ft_Printf/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/shany-moreno-5a863b2aa
