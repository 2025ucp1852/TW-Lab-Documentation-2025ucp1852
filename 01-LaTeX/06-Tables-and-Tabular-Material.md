

\# 6. Tables and Tabular Material in LaTeX



\## 6.1 Introduction



Tables organize information into rows and columns. LaTeX provides the `tabular` environment for creating tables.



\## 6.2 Basic Table



```latex

\\begin{tabular}{|c|c|}

\\hline

Name \& Marks \\\\

\\hline

Amit \& 85 \\\\

Riya \& 90 \\\\

\\hline

\\end{tabular}

```



Explanation:



\- `c` centers a column.

\- `l` aligns a column to the left.

\- `r` aligns a column to the right.

\- `\&` separates columns.

\- `\\\\` ends a row.

\- `\\hline` draws a horizontal line.

\- `|` adds vertical borders.



\## 6.3 Table Environment



The `table` environment allows a table to have a caption and label.



```latex

\\begin{table}\[ht]

\\centering

\\caption{Student Marks}

\\label{tab:marks}



\\begin{tabular}{|c|c|}

\\hline

Name \& Marks \\\\

\\hline

Amit \& 85 \\\\

Riya \& 90 \\\\

\\hline

\\end{tabular}



\\end{table}

```



\## 6.4 Column Alignment



```latex

\\begin{tabular}{lcr}

Name \& Subject \& Marks \\\\

Amit \& Mathematics \& 85 \\\\

Riya \& Physics \& 90

\\end{tabular}

```



This creates three columns: left-aligned, centered, and right-aligned.



\## 6.5 Merging Columns



The `\\multicolumn` command combines multiple columns.



```latex

\\begin{tabular}{|c|c|c|}

\\hline

\\multicolumn{3}{|c|}{Student Information} \\\\

\\hline

Name \& Class \& Marks \\\\

\\hline

Amit \& 10 \& 85 \\\\

\\hline

\\end{tabular}

```



\## 6.6 Referencing Tables



A table can be referenced using its label.



```latex

Table \\ref{tab:marks} shows the student marks.

```



The `\\label` command identifies the table, and `\\ref` inserts its number.



\## 6.7 Practical Applications



Tables are useful for:

\- Comparing data.

\- Presenting student marks.

\- Displaying experimental results.

\- Organizing technical specifications.

\- Summarizing research information.



\## 6.8 Conclusion



LaTeX tables help present structured information clearly. Captions, labels, and references make tables easier to identify and discuss in a document.



