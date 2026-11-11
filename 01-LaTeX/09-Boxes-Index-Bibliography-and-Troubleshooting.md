
# 9. Boxes, Index, Bibliography and Troubleshooting

## 9.1 Introduction

LaTeX provides features for presenting information in boxes, creating indexes, managing references, and identifying compilation errors.

These features are especially useful when preparing long technical reports, research papers, and academic documents.

## 9.2 Text Boxes

The `\mbox` command creates a box that keeps its contents together without allowing a line break inside it.

```latex
\mbox{Technical Writing Lab}
```

The `\makebox` command creates a box with a specified width and alignment.

```latex
\makebox[5cm][c]{Centered Text}
```

The optional alignment argument can be:

- `l` – Left alignment.
- `c` – Center alignment.
- `r` – Right alignment.

## 9.3 Framed Boxes

The `\fbox` command creates a frame around text.

```latex
\fbox{Important Information}
```

The `\parbox` command creates a box containing a paragraph with a specified width.

```latex
\parbox{6cm}{
This is a paragraph placed inside a box.

It can contain multiple lines of text.
}
```

These commands are useful for highlighting information and organizing content.

## 9.4 Index Creation

An index provides an alphabetical list of important terms used in a document. It helps readers quickly locate specific topics.

Add the following commands in the document preamble:

```latex
\usepackage{makeidx}
\makeindex
```

Add index entries inside the document:

```latex
LaTeX\index{LaTeX}

Mathematics\index{Mathematics}
```

Place the following command where the index should appear:

```latex
\printindex
```

The index must also be processed using an index-generation tool such as MakeIndex.

For a document named `main.tex`, a typical command sequence is:

```cmd
pdflatex main.tex
makeindex main
pdflatex main.tex
```

The final LaTeX compilation incorporates the generated index into the PDF.

## 9.5 Bibliography

A bibliography lists the sources used in a document. It helps readers identify books, articles, and other references.

### Using the bibliography environment

```latex
\begin{thebibliography}{9}

\bibitem{latex}
Leslie Lamport,
\textit{LaTeX: A Document Preparation System}.

\bibitem{knuth}
Donald E. Knuth,
\textit{The TeXbook}.

\end{thebibliography}
```

Reference a source using the `\cite` command:

```latex
LaTeX was developed for structured document preparation
\cite{latex}.
```

The citation key in `\cite{latex}` must match the key defined in `\bibitem{latex}`.

## 9.6 Labels and References

Labels identify document elements such as sections, equations, tables, and figures.

Define a label after a section heading:

```latex
\section{Introduction}
\label{sec:introduction}
```

Refer to the section using:

```latex
See Section \ref{sec:introduction}.
```

Some references require compiling the document more than once to update their numbering correctly.

## 9.7 Common LaTeX Errors

The following table describes common LaTeX errors, their possible causes, and suggested solutions.

| Error | Possible Cause | Solution |
|---|---|---|
| Missing `$` inserted | Incorrect mathematical delimiters. | Check `$` symbols and equation environments. |
| Undefined control sequence | Misspelled or unavailable command. | Check command spelling and load required packages. |
| Missing `\begin{document}` | Document structure is incomplete. | Add the document environment. |
| Extra alignment tab | Too many `&` symbols in a table row. | Check the number of columns and alignment symbols. |
| File not found | An image or input file is missing. | Check the file name and path. |
| Environment ended incorrectly | Mismatched `\begin` and `\end` commands. | Match every environment pair correctly. |

## 9.8 Good Practices

Follow these practices when preparing LaTeX documents:

1. Use meaningful section headings.
2. Keep source files organized.
3. Use comments to explain complex code.
4. Check package requirements.
5. Compile documents frequently.
6. Correct errors before submitting.
7. Use labels and references consistently.
8. Keep image files in the project directory.

## 9.9 Practical Applications

Boxes, indexes, bibliographies, and troubleshooting techniques are useful for:

- Preparing long technical reports.
- Creating technical manuals.
- Managing citations and references.
- Building alphabetical indexes.
- Presenting important information in boxes.
- Finding and correcting compilation errors.

## 9.10 Conclusion

Boxes, indexes, bibliographies, and troubleshooting techniques help create complete and professional LaTeX documents. They are important for producing well-organized academic and technical publications.
