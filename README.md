# 1. Introduction to LaTeX and Document Structure

## 1.1 What is LaTeX?

LaTeX is a document preparation system used to create professional and well-formatted documents. It is especially useful for academic writing, research papers, technical reports, books, and mathematical documents.

Unlike ordinary word processors, LaTeX uses commands to control the structure and appearance of a document.

## 1.2 Features of LaTeX

- Produces professional-quality documents.
- Supports mathematical equations and symbols.
- Automatically numbers sections, figures, tables, and equations.
- Provides references and citations.
- Supports large documents such as books and research papers.
- Separates document content from formatting.

## 1.3 Basic Structure of a LaTeX Document

A basic LaTeX document contains three main parts:

1. Document class declaration
2. Preamble
3. Document body

### Example

```latex
\documentclass[a4paper,12pt]{article}

\usepackage{amsmath}

\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
LaTeX is used to prepare professional documents.

\section{Features}
LaTeX supports equations, tables, figures, and references.

\end{document}
```

## 1.4 Explanation of Important Commands

| Command | Purpose |
|---|---|
| `\documentclass` | Defines the type of document |
| `\usepackage` | Loads additional packages |
| `\title` | Specifies the document title |
| `\author` | Specifies the author's name |
| `\date` | Specifies the document date |
| `\begin{document}` | Starts the document body |
| `\end{document}` | Ends the document body |
| `\maketitle` | Displays the title information |
| `\section{}` | Creates a section |

## 1.5 Common Document Classes

- `article` – For articles and short reports.
- `report` – For longer reports and projects.
- `book` – For books and large documents.
- `letter` – For formal letters.
- `beamer` – For presentations.

## 1.6 Comments in LaTeX

The percentage symbol `%` is used to write comments. LaTeX ignores everything after `%` on that line.

Example:

```latex
% This is a comment
\documentclass{article}

\begin{document}
Hello, LaTeX!
\end{document}
```

## 1.7 Conclusion

LaTeX provides a structured and reliable way to prepare professional documents. Understanding its basic structure and commands is the first step toward creating advanced documents.
