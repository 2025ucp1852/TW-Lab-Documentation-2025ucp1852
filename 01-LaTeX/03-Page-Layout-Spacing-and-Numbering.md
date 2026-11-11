

\# 3. Page Layout, Spacing and Numbering in LaTeX



\## 3.1 Introduction



Page layout determines how text and other elements are arranged on a page. LaTeX provides commands and packages to control page size, margins, line spacing, paragraph spacing, headers, footers, and page numbering.



Proper page formatting improves the readability and presentation of technical reports, assignments, and research papers.



\## 3.2 Paper Size and Font Size



The `\\documentclass` command specifies the document type and allows options for paper size and default font size.



\### Example



```latex

\\documentclass\[12pt,a4paper]{article}



\\begin{document}



This document uses A4 paper and a 12-point default font size.



\\end{document}

```



Common paper sizes include:



| Option | Description |

|---|---|

| `a4paper` | A4 paper size. |

| `letterpaper` | US Letter paper size. |

| `a5paper` | A5 paper size. |

| `b5paper` | B5 paper size. |



Common font-size options include `10pt`, `11pt`, and `12pt`.



\## 3.3 Setting Page Margins



The `geometry` package provides a convenient way to control page margins.



\### Example



```latex

\\documentclass\[a4paper,12pt]{article}



\\usepackage\[margin=1in]{geometry}



\\begin{document}



This document has one-inch margins on all sides.



\\end{document}

```



Different margins can also be specified individually.



```latex

\\usepackage\[

&#x20;   top=1in,

&#x20;   bottom=1in,

&#x20;   left=1.25in,

&#x20;   right=1in

]{geometry}

```



\*\*Explanation:\*\*



\- `top` controls the top margin.

\- `bottom` controls the bottom margin.

\- `left` controls the left margin.

\- `right` controls the right margin.



\## 3.4 Line Spacing



Line spacing controls the vertical distance between lines of text.



The `setspace` package provides commands for changing line spacing.



\### Example



```latex

\\documentclass{article}



\\usepackage{setspace}



\\begin{document}



\\singlespacing

This paragraph uses single line spacing.



\\onehalfspacing

This paragraph uses one-and-a-half line spacing.



\\doublespacing

This paragraph uses double line spacing.



\\end{document}

```



\*\*Explanation:\*\*



| Command | Purpose |

|---|---|

| `\\singlespacing` | Single line spacing. |

| `\\onehalfspacing` | One-and-a-half line spacing. |

| `\\doublespacing` | Double line spacing. |



\## 3.5 Paragraph Spacing and Indentation



LaTeX provides commands to control paragraph indentation and spacing.



\### Example



```latex

\\documentclass{article}



\\setlength{\\parindent}{0pt}

\\setlength{\\parskip}{10pt}



\\begin{document}



This is the first paragraph. It starts without indentation.



This is the second paragraph. Extra vertical space separates it from the first paragraph.



\\end{document}

```



\*\*Explanation:\*\*



\- `\\parindent` controls the indentation at the beginning of paragraphs.

\- `\\parskip` controls the vertical space between paragraphs.

\- `0pt` removes paragraph indentation.



\## 3.6 Page Breaks



LaTeX provides commands to control page breaks.



| Command | Purpose |

|---|---|

| `\\newpage` | Starts a new page. |

| `\\clearpage` | Starts a new page after processing pending floats. |

| `\\pagebreak` | Requests a page break. |

| `\\nopagebreak` | Requests that LaTeX avoid a page break. |



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\section{First Section}



This is the content of the first section.



\\newpage



\\section{Second Section}



This section begins on a new page.



\\end{document}

```



\## 3.7 Page Numbering



The `\\pagenumbering` command controls the style of page numbers.



| Command | Numbering Style |

|---|---|

| `\\pagenumbering{arabic}` | 1, 2, 3, ... |

| `\\pagenumbering{roman}` | i, ii, iii, ... |

| `\\pagenumbering{Roman}` | I, II, III, ... |

| `\\pagenumbering{alph}` | a, b, c, ... |

| `\\pagenumbering{Alph}` | A, B, C, ... |



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\pagenumbering{roman}



\\section{Preface}



This page uses lowercase Roman numbering.



\\newpage



\\pagenumbering{arabic}



\\section{Introduction}



This page uses Arabic numbering.



\\end{document}

```



\## 3.8 Removing Page Numbers



The `\\pagestyle{empty}` command removes page numbers and other standard page header and footer information.



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\pagestyle{empty}



This document does not display page numbers.



\\end{document}

```



\## 3.9 Page Styles



LaTeX provides standard page styles.



| Page Style | Description |

|---|---|

| `plain` | Displays the page number, usually at the bottom. |

| `empty` | Removes headers and footers. |

| `headings` | Displays section information and page numbers in headers. |

| `myheadings` | Allows manually specified heading information. |



\### Example



```latex

\\documentclass{article}



\\pagestyle{headings}



\\begin{document}



\\section{Introduction}



This document uses the headings page style.



\\end{document}

```



\## 3.10 Headers and Footers Using fancyhdr



The `fancyhdr` package allows customized headers and footers.



\### Example



```latex

\\documentclass{article}



\\usepackage{fancyhdr}



\\pagestyle{fancy}

\\fancyhf{}



\\fancyhead\[L]{TW Lab 2026}

\\fancyhead\[R]{LaTeX Documentation}

\\fancyfoot\[C]{\\thepage}



\\begin{document}



\\section{Introduction}



This document uses customized headers and footers.



\\end{document}

```



\*\*Explanation:\*\*



\- `\\usepackage{fancyhdr}` loads the package.

\- `\\pagestyle{fancy}` activates the customized page style.

\- `\\fancyhf{}` clears the default header and footer fields.

\- `\\fancyhead\[L]{}` places text on the left side of the header.

\- `\\fancyhead\[R]{}` places text on the right side of the header.

\- `\\fancyfoot\[C]{}` places the page number in the center of the footer.

\- `\\thepage` displays the current page number.



\## 3.11 Practical Applications



Page layout commands are useful for:



1\. Setting margins according to assignment requirements.

2\. Choosing suitable paper and font sizes.

3\. Improving readability through line spacing.

4\. Organizing long documents with page breaks.

5\. Creating Roman-numbered preliminary pages.

6\. Adding consistent headers and footers.



\## 3.12 Conclusion



Page layout and numbering commands help create consistent and professional documents. By using packages such as `geometry`, `setspace`, and `fancyhdr`, users can control the appearance and organization of LaTeX documents.



