
# 6. Tables and Tabular Material in LaTeX

## 6.1 Introduction

Tables organize information into rows and columns. LaTeX provides the `tabular` environment for creating tables.

Tables are useful for presenting numerical data, comparisons, experimental results, and technical information in a structured format.

## 6.2 Basic Table

The `tabular` environment is used to create a simple table.

### Example

```latex id="m6pq8v"
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Amit & 85 \\
Riya & 90 \\
\hline
\end{tabular}
```

**Explanation:**

- `c` centers a column.
- `l` aligns a column to the left.
- `r` aligns a column to the right.
- `&` separates columns.
- `\\` ends a row.
- `\hline` draws a horizontal line.
- `|` adds vertical borders.

## 6.3 Table Environment

The `table` environment allows a table to have a caption and label. It also allows LaTeX to position the table appropriately in the document.

### Example

```latex id="c2b6ub"
\begin{table}[ht]
\centering
\caption{Student Marks}
\label{tab:marks}

\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Amit & 85 \\
Riya & 90 \\
\hline
\end{tabular}

\end{table}
```

**Explanation:**

- `table` creates a floating table environment.
- `[ht]` suggests placing the table here or at the top of a page.
- `\centering` centers the table.
- `\caption{}` adds a table title.
- `\label{}` assigns an identifier for referencing the table.

## 6.4 Column Alignment

LaTeX allows different alignment options for table columns.

### Example

```latex id="3db6d2"
\begin{tabular}{lcr}
Name & Subject & Marks \\
Amit & Mathematics & 85 \\
Riya & Physics & 90
\end{tabular}
```

This creates three columns:

- First column: left-aligned.
- Second column: centered.
- Third column: right-aligned.

## 6.5 Merging Columns

The `\multicolumn` command combines multiple columns into a single cell.

### Example

```latex id="x1ud0b"
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{3}{|c|}{Student Information} \\
\hline
Name & Class & Marks \\
\hline
Amit & 10 & 85 \\
\hline
\end{tabular}
```

**Explanation:**

The command `\multicolumn{3}{|c|}{Student Information}` combines three columns into one centered cell with vertical borders.

## 6.6 Referencing Tables

A table can be referenced using its label.

### Example

```latex id="nb4mks"
Table \ref{tab:marks} shows the student marks.
```

The `\label` command identifies the table, and `\ref` inserts its number.

**Note:** Place the `\label` command after `\caption` so that it refers to the correct table number. LaTeX may require more than one compilation to resolve references correctly.

## 6.7 Complete Practical Example

The following example combines a caption, label, table data, and a reference.

### Example

```latex id="6g6bs4"
\documentclass{article}

\begin{document}

\section{Student Results}

Table \ref{tab:marks} shows the student marks.

\begin{table}[ht]
\centering
\caption{Student Marks}
\label{tab:marks}

\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Amit & 85 \\
Riya & 90 \\
\hline
\end{tabular}

\end{table}

\end{document}
```

## 6.8 Practical Applications

Tables are useful for:

- Comparing data.
- Presenting student marks.
- Displaying experimental results.
- Organizing technical specifications.
- Summarizing research information.

## 6.9 Conclusion

LaTeX tables help present structured information clearly. Captions, labels, and references make tables easier to identify and discuss in a document.
