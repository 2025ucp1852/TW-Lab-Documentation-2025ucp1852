
# Beamer Documentation — TW Lab 2026

## 1. Introduction

Beamer is a LaTeX document class used to create professional presentations in PDF format. It provides tools for creating slides, adding mathematical equations, inserting images and tables, applying themes, and organizing presentation content.

Beamer is widely used for academic lectures, seminars, research presentations, project demonstrations, and technical communication.

## 2. Learning Objectives

After studying this topic, students will be able to:

- Understand the structure of a Beamer presentation.
- Create title slides and presentation frames.
- Organize content using sections and subsections.
- Apply themes, colors, and templates.
- Create lists, blocks, and columns.
- Insert mathematical equations.
- Add images and tables.
- Use overlays and presentation features.
- Compile and troubleshoot Beamer documents.

## 3. Basic Structure of a Beamer Document

A Beamer document consists of a document class, preamble, document environment, and frames.

```latex
\documentclass{beamer}

\title{My First Presentation}
\author{Student Name}
\institute{Technical Writing Lab}
\date{2026}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{Introduction}
    Welcome to my first Beamer presentation.
\end{frame}

\end{document}
```

### Important Commands

| Command | Purpose |
|---|---|
| `\documentclass{beamer}` | Selects the Beamer document class |
| `\title{}` | Defines the presentation title |
| `\author{}` | Specifies the author |
| `\institute{}` | Specifies the institution |
| `\date{}` | Defines the presentation date |
| `\begin{frame}` | Starts a slide |
| `\titlepage` | Displays the title slide |
| `\end{frame}` | Ends a slide |

## 4. Frames, Sections and Subsections

A frame represents an individual slide. The `\section` and `\subsection` commands organize presentation content.

```latex
\section{Introduction}

\begin{frame}{Introduction}
    This is the introduction slide.
\end{frame}

\subsection{Features}

\begin{frame}{Features}
    Beamer supports themes, images, equations, and tables.
\end{frame}
```

## 5. Themes, Colors and Templates

Beamer provides built-in themes that control the appearance of slides.

```latex
\usetheme{Madrid}
\usecolortheme{beaver}
```

Other commonly used themes include:

- Madrid
- CambridgeUS
- Berlin
- Warsaw
- Copenhagen
- Singapore

A color theme can be changed independently of the main theme.

## 6. Lists, Blocks and Columns

Beamer supports itemized lists, numbered lists, blocks, and columns.

### Itemized List

```latex
\begin{itemize}
    \item First point
    \item Second point
    \item Third point
\end{itemize}
```

### Numbered List

```latex
\begin{enumerate}
    \item Introduction
    \item Main Content
    \item Conclusion
\end{enumerate}
```

### Block

```latex
\begin{block}{Important Note}
    Beamer is used to create presentations.
\end{block}
```

### Columns

```latex
\begin{columns}
    \column{0.5\textwidth}
    Left Column Content

    \column{0.5\textwidth}
    Right Column Content
\end{columns}
```

## 7. Mathematics, Images and Tables

Beamer supports mathematical expressions using standard LaTeX syntax.

```latex
\[
E = mc^2
\]
```

Images can be inserted using the `graphicx` package.

```latex
\usepackage{graphicx}

\includegraphics[width=0.5\textwidth]{image.png}
```

Tables can be created using the `tabular` environment.

```latex
\begin{tabular}{|c|c|}
\hline
Subject & Marks \\
\hline
Mathematics & 90 \\
Physics & 85 \\
\hline
\end{tabular}
```

## 8. Overlays and Advanced Features

Overlays allow presentation content to appear gradually.

```latex
\begin{itemize}
    \item<1-> First point
    \item<2-> Second point
    \item<3-> Third point
\end{itemize}
```

The `\pause` command can also reveal content in stages.

```latex
\begin{frame}{Step-by-Step Content}
    First statement.
    \pause

    Second statement.
    \pause

    Third statement.
\end{frame}
```

## 9. Compilation and Troubleshooting

Save the source file with the `.tex` extension.

Compile it using:

```cmd
pdflatex filename.tex
```

Common problems include:

| Problem | Possible Solution |
|---|---|
| Undefined control sequence | Check command spelling and required packages |
| File not found | Check the image or source file path |
| Missing package | Install the required package |
| Missing brace | Check matching `{` and `}` |
| Environment error | Match every `\begin` with `\end` |

Compile again after correcting errors.


## 10. Practical Examples

The following practical examples demonstrate the major features of LaTeX Beamer.

| No. | Example | Topics Covered |
|---|---|---|
| 1 | Basic Presentation | Title slide, frames, lists and equations |
| 2 | Beamer Features | Themes, colors, blocks, columns and overlays |
| 3 | Advanced Presentation | Mathematical equations, tables and figures |

### Example 1: Basic Presentation

- Source: [01-basic-presentation.tex](Examples/01-basic-presentation.tex)
- Output: [01-basic-presentation.pdf](Examples/01-basic-presentation.pdf)

### Example 2: Beamer Features

- Source: [02-beamer-features.tex](Examples/02-beamer-features.tex)
- Output: [02-beamer-features.pdf](Examples/02-beamer-features.pdf)

### Example 3: Advanced Presentation

- Source: [03-advanced-presentation.tex](Examples/03-advanced-presentation.tex)
- Output: [03-advanced-presentation.pdf](Examples/03-advanced-presentation.pdf)

## 11. Requirements

- MiKTeX or TeX Live.
- A text editor such as Notepad or Visual Studio Code.
- A PDF viewer.
- Command Prompt for compilation.

## 12. Conclusion

Beamer is a powerful LaTeX document class for creating professional academic and technical presentations. It supports structured slides, themes, colors, mathematical expressions, images, tables, and overlays. The practical examples in this folder demonstrate these features for TW Lab 2026.
