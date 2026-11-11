
# 1. Introduction and Structure of LaTeX

## 1.1 Introduction

LaTeX is a document preparation system widely used for academic writing, research papers, technical reports, books, and mathematical documents.

Unlike ordinary word processors, LaTeX uses commands to describe the structure and formatting of a document. It automatically manages features such as section numbering, page layout, mathematical expressions, tables, and references.

## 1.2 Features of LaTeX

- Produces professional-quality documents.
- Supports complex mathematical expressions.
- Provides automatic section and page numbering.
- Supports tables, figures, and diagrams.
- Manages bibliographies and references.
- Separates document content from formatting instructions.

## 1.3 Basic Structure of a LaTeX Document

A basic LaTeX document has two main parts:

1. **Preamble:** Contains the document class, packages, and document information.
2. **Document body:** Contains the actual text, equations, tables, and figures.

### Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}

\title{My First LaTeX Document}
\author{TW Lab 2026 Student}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

This is my first LaTeX document.

\end{document}
```

## 1.4 Explanation of Important Commands

| Command | Description |
|---|---|
| `\documentclass{article}` | Specifies the document class. |
| `\usepackage{amsmath}` | Loads mathematical features. |
| `\title{}` | Specifies the document title. |
| `\author{}` | Specifies the author. |
| `\date{}` | Specifies the document date. |
| `\begin{document}` | Starts the document body. |
| `\maketitle` | Displays title information. |
| `\end{document}` | Ends the document. |

## 1.5 Document Classes

The `\documentclass` command determines the basic structure of a document.

Common document classes include:

| Class | Purpose |
|---|---|
| `article` | Articles and short reports. |
| `report` | Longer technical and academic reports. |
| `book` | Books and long documents. |
| `letter` | Formal letters. |
| `beamer` | Presentations. |
| `exam` | Examination papers (requires the exam class). |

### Example

```latex
\documentclass[12pt,a4paper]{report}
```

Here:

- `12pt` specifies the default font size.
- `a4paper` specifies the paper size.
- `report` specifies the document class.

## 1.6 Document Sections

LaTeX provides commands to organize content into headings and subheadings.

```latex
\part{Main Part}
\chapter{Introduction}
\section{Background}
\subsection{History}
\subsubsection{Development}
\paragraph{Overview}
\subparagraph{Details}
```

**Note:** The `\chapter` command is available in classes such as `report` and `book`, but not in `article`.

Starred heading commands, such as `\section*{Introduction}`, create unnumbered headings.

## 1.7 Comments in LaTeX

The percent symbol `%` is used to write comments. LaTeX ignores everything after `%` on that line.

```latex
% This is a comment.

\section{Introduction} % This creates a section.
```

Comments are useful for explaining source code and temporarily disabling commands.

## 1.8 Special Characters

Some characters have special meanings in LaTeX. Use escape commands to display them.

| Character | LaTeX Command |
|---|---|
| % | `\%` |
| $ | `\$` |
| & | `\&` |
| # | `\#` |
| _ | `\_` |
| { | `\{` |
| } | `\}` |

## 1.9 Compilation

To generate a PDF from a LaTeX source file:

1. Write the source code in a `.tex` file.
2. Open it in a LaTeX editor.
3. Select a suitable compiler, such as pdfLaTeX.
4. Compile the document.
5. View the generated PDF.
6. Correct any errors and compile again if necessary.

## 1.10 Practical Example

The complete basic document example is available here:

[01-basic-document.tex](Examples/01-basic-document.tex)

## 1.11 Conclusion

LaTeX provides a structured approach to document preparation. Understanding document classes, packages, commands, and environments is the foundation for creating professional technical documents.
