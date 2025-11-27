<img src="readme/printf.png" alt="printf" width="900"/>

<div align="center">

# Ft_Printf
### A Reimplementation of the C printf Function

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![License][license-shield]][license-url]

</div>

---

## 🇬🇧 English

<details>
<summary><b>📖 Click to expand/collapse English version</b></summary>

### About

**Ft_Printf** is a compulsory project for 42 School students. It consists of reimplementing the standard printf function in C, creating a static library that mimics the behavior of the original printf().

This project teaches:
- Variadic functions and argument handling
- Format specifier parsing
- Memory management for string formatting
- Modular code organization
- Code documentation and norming standards

### 📋 Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Makefile Targets](#makefile-targets)
- [Function Reference](#function-reference)
- [Credits](#credits)

<a name="features"></a>

### ✨ Features

- **Complete printf reimplementation** with all standard conversions
- **Strict C89/C99 compliance** with 42 School norming standards
- **Fully documented** with clear purpose statements
- **Production-ready** static library compilation

<a name="installation"></a>

### 🚀 Installation

```bash
# Clone the repository
git clone https://github.com/HaruSnak/42-ft_printf
cd 42-ft_printf

# Compile the library
make
```

<a name="usage"></a>

### 💻 Usage

Include the library in your C projects:

```c
#include "ft_printf.h"
```

Compile your program linking against the library:

```bash
gcc your_program.c libftprintf.a -o your_program
./your_program
```

<a name="project-structure"></a>

### 📂 Project Structure

```
ft_printf/
├── Makefile                 # Build configuration
├── ft_printf.h             # Main header file
├── ft_printf.c             # Main printf function
├── ft_conv_primary.c       # Primary conversion handlers
├── ft_conv_specifies.c     # Specific conversion functions
├── ft_conv_suit.c          # Conversion suite utilities
├── ft_putchar_fd.c         # Character output to file descriptor
├── ft_putchar.c            # Character output
├── ft_putnbr.c             # Number output
├── ft_putstr.c             # String output
└── ft_strlen.c             # String length calculation
```

<a name="makefile-targets"></a>

### 🛠️ Makefile Targets

| Target | Description |
|--------|-------------|
| `make` or `make all` | Compile library and create `libftprintf.a` |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and library |
| `make re` | Full recompilation |

<a name="function-reference"></a>

### 📚 Function Reference

#### Main Function
- [`ft_printf`](ft_printf.c) - Reimplementation of printf with format specifiers

#### Conversion Handlers
- [`ft_conv_primary`](ft_conv_primary.c) - Handles primary conversions (c, s, p, d, i, u, x, X, %)
- [`ft_conv_specifies`](ft_conv_specifies.c) - Specific conversion implementations
- [`ft_conv_suit`](ft_conv_suit.c) - Conversion suite utilities

#### Utility Functions
- [`ft_putchar_fd`](ft_putchar_fd.c) - Write character to file descriptor
- [`ft_putchar`](ft_putchar.c) - Write character to stdout
- [`ft_putnbr`](ft_putnbr.c) - Write number to stdout
- [`ft_putstr`](ft_putstr.c) - Write string to stdout
- [`ft_strlen`](ft_strlen.c) - Calculate string length

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

<a name="credits"></a>

### 📖 Credits

- **42 School Norm**: [Official C Coding Standard](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- **Printf IBM Documentation**: [IBM Documentation Printf](https://www.ibm.com/docs/fr/i/7.5.0?topic=functions-printf-print-formatted-characters)
- **Wikipedia Printf**: [Wikipedia Printf](https://en.wikipedia.org/wiki/Printf)

### 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

</details>

---

## 🇫🇷 Français

<details>
<summary><b>📖 Cliquez pour développer/réduire la version française</b></summary>

### À propos

**Ft_Printf** est un projet obligatoire pour les étudiants de l'école 42. Il s'agit de réimplémenter la fonction printf standard en C, créant une bibliothèque statique qui imite le comportement de printf() originale.

Ce projet enseigne :
- Les fonctions variadiques et la gestion des arguments
- L'analyse des spécificateurs de format
- La gestion de la mémoire pour le formatage des chaînes
- L'organisation modulaire du code
- La documentation du code et les normes de programmation

### 📋 Table des matières

- [Caractéristiques](#caractéristiques)
- [Installation](#installation-1)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [Cibles du Makefile](#cibles-du-makefile)
- [Référence des fonctions](#référence-des-fonctions)
- [Crédits](#crédits-1)

<a name="caractéristiques"></a>

### ✨ Caractéristiques

- **Réimplémentation complète de printf** avec toutes les conversions standard
- **Conformité stricte C89/C99** avec les normes de l'école 42
- **Entièrement documentées** avec des descriptions claires
- **Prêtes pour la production** avec compilation en bibliothèque statique

<a name="installation-1"></a>

### 🚀 Installation

```bash
# Cloner le dépôt
git clone https://github.com/HaruSnak/42-ft_printf
cd 42-ft_printf

# Compiler la bibliothèque
make
```

<a name="utilisation"></a>

### 💻 Utilisation

Incluez la bibliothèque dans vos projets C :

```c
#include "ft_printf.h"
```

Compilez votre programme en le liant à la bibliothèque :

```bash
gcc your_program.c libftprintf.a -o your_program
./your_program
```

<a name="structure-du-projet"></a>

### 📂 Structure du projet

```
ft_printf/
├── Makefile                 # Configuration de compilation
├── ft_printf.h             # Fichier d'en-tête principal
├── ft_printf.c             # Fonction printf principale
├── ft_conv_primary.c       # Gestionnaires de conversions primaires
├── ft_conv_specifies.c     # Fonctions de conversions spécifiques
├── ft_conv_suit.c          # Utilitaires de suite de conversions
├── ft_putchar_fd.c         # Écriture de caractère sur descripteur fichier
├── ft_putchar.c            # Écriture de caractère
├── ft_putnbr.c             # Écriture de nombre
├── ft_putstr.c             # Écriture de chaîne
└── ft_strlen.c             # Calcul de longueur de chaîne
```

<a name="cibles-du-makefile"></a>

### 🛠️ Cibles du Makefile

| Cible | Description |
|-------|-------------|
| `make` ou `make all` | Compiler la bibliothèque et créer `libftprintf.a` |
| `make clean` | Supprimer les fichiers objets |
| `make fclean` | Supprimer les fichiers objets et la bibliothèque |
| `make re` | Recompilation complète |

<a name="référence-des-fonctions"></a>

### 📚 Référence des fonctions

#### Fonction principale
- [`ft_printf`](ft_printf.c) - Réimplémentation de printf avec spécificateurs de format

#### Gestionnaires de conversions
- [`ft_conv_primary`](ft_conv_primary.c) - Gère les conversions primaires (c, s, p, d, i, u, x, X, %)
- [`ft_conv_specifies`](ft_conv_specifies.c) - Implémentations de conversions spécifiques
- [`ft_conv_suit`](ft_conv_suit.c) - Utilitaires de suite de conversions

#### Fonctions utilitaires
- [`ft_putchar_fd`](ft_putchar_fd.c) - Écrire caractère sur descripteur fichier
- [`ft_putchar`](ft_putchar.c) - Écrire caractère sur stdout
- [`ft_putnbr`](ft_putnbr.c) - Écrire nombre sur stdout
- [`ft_putstr`](ft_putstr.c) - Écrire chaîne sur stdout
- [`ft_strlen`](ft_strlen.c) - Calculer longueur de chaîne

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

<a name="crédits-1"></a>

### 📖 Crédits

- **Norme 42**: [Standard C officiel](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- **Printf IBM Documentation**: [IBM Documentation Printf](https://www.ibm.com/docs/fr/i/7.5.0?topic=functions-printf-print-formatted-characters)
- **Wikipedia Printf**: [Wikipedia Printf](https://en.wikipedia.org/wiki/Printf)

### 📄 Licence

Ce projet est sous licence **MIT** - voir le fichier [LICENSE](LICENSE) pour plus de détails.

</details>

---

[contributors-shield]: https://img.shields.io/github/contributors/HaruSnak/42-ft_printf.svg?style=for-the-badge
[contributors-url]: https://github.com/HaruSnak/42-ft_printf/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HaruSnak/42-ft_printf.svg?style=for-the-badge
[forks-url]: https://github.com/HaruSnak/42-ft_printf/network/members
[stars-shield]: https://img.shields.io/github/stars/HaruSnak/42-ft_printf.svg?style=for-the-badge
[stars-url]: https://github.com/HaruSnak/42-ft_printf/stargazers
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/42-ft_printf.svg?style=for-the-badge
[issues-url]: https://github.com/HaruSnak/42-ft_printf/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/shany-moreno-5a863b2aa
[license-shield]: https://img.shields.io/github/license/HaruSnak/42-ft_printf.svg?style=for-the-badge
[license-url]: https://github.com/HaruSnak/42-ft_printf/blob/master/LICENSE
