# Doxygen Documentation - TW Lab 2026

## 1. Introduction

Doxygen is a documentation generation tool used to create software documentation directly from source-code comments. It supports programming languages such as C, C++, Java, Python and others.

Doxygen helps programmers explain the purpose, functionality and structure of source code. It can generate documentation in HTML, LaTeX and other formats.

## 2. Learning Objectives

After completing this section, students will be able to:
- Understand the purpose of Doxygen.
- Write documentation comments in source code.
- Use Doxygen commands and tags.
- Configure a Doxygen project.
- Generate HTML documentation.
- Understand the structure of generated documentation.

## 3. Features of Doxygen

Important features include:
- Automatic documentation generation.
- Support for multiple programming languages.
- Documentation of functions, classes and variables.
- HTML and LaTeX output generation.
- Cross-references and navigation.
- Support for documentation groups and modules.

## 4. Installing Doxygen

Download Doxygen from its official website:

https://www.doxygen.nl/download.html

Install Doxygen on Windows and ensure that its installation directory is added to the system PATH.

Verify the installation using CMD:

```cmd
doxygen --version
```

## 5. Documentation Comments

Doxygen recognizes specially formatted comments.

### 5.1 C-Style Documentation

```c
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b);
```

### 5.2 C++-Style Documentation

```cpp
/// @brief Calculates the square of a number.
/// @param n Input number.
/// @return Square of the number.
int square(int n);
```

## 6. Important Doxygen Commands

| Command | Purpose |
|---|---|
| @brief | Provides a short description |
| @param | Describes a function parameter |
| @return | Describes the return value |
| @details | Provides additional information |
| @author | Specifies the author |
| @file | Documents a source file |
| @date | Specifies the date |
| @see | Refers to related documentation |

## 7. Creating a Doxygen Configuration File

Doxygen uses a configuration file named `Doxyfile`.

Generate a default configuration file using:

```cmd
doxygen -g Doxyfile
```

Important configuration settings include:

```text
PROJECT_NAME = "TW Lab 2026 - Doxygen Documentation"
INPUT = Examples
RECURSIVE = YES
OUTPUT_DIRECTORY = docs
GENERATE_HTML = YES
GENERATE_LATEX = NO
EXTRACT_ALL = YES
```

These settings control the input files, output directory and documentation formats.

## 8. Generating Documentation

After configuring the Doxyfile, run:

```cmd
doxygen Doxyfile
```

Doxygen reads the source files and generates documentation.

The main HTML documentation page is created at:

```text
docs/html/index.html
```

Open this file in a web browser to explore the generated documentation.

## 9. Practical Examples

The following examples demonstrate Doxygen documentation techniques.

| No. | Source File | Topics |
|---|---|---|
| 1 | `01-basic-functions.cpp` | File, function, parameter and return documentation |
| 2 | `02-structures-and-variables.cpp` | Structures, members and variables |

The C++ source files are available in the `Examples` folder.

Generated HTML documentation is available in `docs/html`.

## 10. Requirements

- Windows operating system.
- Doxygen installed and configured in PATH.
- C++ compiler (optional for generating documentation).
- Text editor such as Notepad or Visual Studio Code.
- Web browser for viewing generated HTML documentation.

## 11. Conclusion

Doxygen simplifies software documentation by generating structured documentation from source-code comments. It improves code readability, maintainability and communication among developers.