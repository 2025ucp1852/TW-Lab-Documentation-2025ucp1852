

\# 2. Text Formatting and Fonts in LaTeX



\## 2.1 Introduction



LaTeX provides several commands to format text and control its appearance. These commands are useful for preparing professional reports, assignments, research papers, and technical documents.



Text formatting includes:

\- Bold text

\- Italic text

\- Underlined text

\- Font families

\- Font sizes

\- Text alignment

\- Special text styles



\## 2.2 Bold, Italic, and Underlined Text



LaTeX provides simple commands to change the appearance of text.



| Command | Purpose |

|---|---|

| `\\textbf{Text}` | Makes text bold. |

| `\\textit{Text}` | Makes text italic. |

| `\\underline{Text}` | Underlines text. |

| `\\emph{Text}` | Emphasizes text. |

| `\\texttt{Text}` | Displays typewriter-style text. |

| `\\textsc{Text}` | Displays small capital letters. |



\### Example



```latex

\\documentclass{article}



\\begin{document}



This is normal text.



\\textbf{This is bold text.}



\\textit{This is italic text.}



\\underline{This is underlined text.}



\\texttt{This is typewriter text.}



\\textsc{This is small capital text.}



\\emph{This is emphasized text.}



\\end{document}

```



\*\*Explanation:\*\*



\- `\\textbf{}` is used to highlight important information.

\- `\\textit{}` is commonly used for emphasis or technical terms.

\- `\\underline{}` draws a line below the text.

\- `\\texttt{}` is useful for displaying commands and code.

\- `\\emph{}` emphasizes text and adapts to the surrounding formatting.



\## 2.3 Font Sizes



LaTeX provides predefined commands to change the size of text.



| Command | Description |

|---|---|

| `\\tiny` | Very small text. |

| `\\scriptsize` | Extra small text. |

| `\\footnotesize` | Footnote-sized text. |

| `\\small` | Small text. |

| `\\normalsize` | Normal text size. |

| `\\large` | Large text. |

| `\\Large` | Larger text. |

| `\\LARGE` | Very large text. |

| `\\huge` | Huge text. |

| `\\Huge` | Largest predefined size. |



\### Example



```latex

\\documentclass{article}



\\begin{document}



{\\tiny This is tiny text.}



{\\small This is small text.}



{\\normalsize This is normal text.}



{\\large This is large text.}



{\\Large This is larger text.}



{\\huge This is huge text.}



{\\Huge This is the largest predefined size.}



\\end{document}

```



\*\*Explanation:\*\*



The braces `{ }` create a group so that the selected font size applies only to the text inside that group.



\## 2.4 Font Families



LaTeX supports three traditional font families.



| Command | Font Family |

|---|---|

| `\\textrm{Text}` | Roman (serif). |

| `\\textsf{Text}` | Sans-serif. |

| `\\texttt{Text}` | Typewriter (monospaced). |



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\textrm{This is Roman font.}



\\textsf{This is Sans-serif font.}



\\texttt{This is Typewriter font.}



\\end{document}

```



\*\*Explanation:\*\*



\- Roman fonts are commonly used for formal documents.

\- Sans-serif fonts have a clean appearance.

\- Typewriter fonts use equal character spacing and are suitable for code.



\## 2.5 Text Alignment



LaTeX provides environments to align paragraphs.



| Environment | Purpose |

|---|---|

| `flushleft` | Aligns text to the left. |

| `center` | Centers text. |

| `flushright` | Aligns text to the right. |



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\begin{flushleft}

This paragraph is aligned to the left.

\\end{flushleft}



\\begin{center}

This paragraph is centered.

\\end{center}



\\begin{flushright}

This paragraph is aligned to the right.

\\end{flushright}



\\end{document}

```



\## 2.6 Font Declarations



LaTeX also provides declaration commands that apply formatting to a group of text.



| Command | Effect |

|---|---|

| `\\bfseries` | Bold font. |

| `\\itshape` | Italic shape. |

| `\\rmfamily` | Roman family. |

| `\\sffamily` | Sans-serif family. |

| `\\ttfamily` | Typewriter family. |

| `\\mdseries` | Medium font weight. |

| `\\upshape` | Upright font shape. |



\### Example



```latex

\\documentclass{article}



\\begin{document}



{\\bfseries This sentence is bold.}



{\\itshape This sentence is italic.}



{\\sffamily This sentence uses sans-serif font.}



{\\ttfamily This sentence uses typewriter font.}



\\end{document}

```



\## 2.7 Combining Text Styles



Different formatting commands can be combined to create different text appearances.



\### Example



```latex

\\documentclass{article}



\\begin{document}



\\textbf{\\textit{Bold and italic text}}



\\underline{\\textbf{Bold and underlined text}}



\\textsf{\\textbf{Bold sans-serif text}}



\\end{document}

```



\## 2.8 Practical Applications



Text formatting is useful in many types of technical documents:



1\. \*\*Bold text:\*\* Highlights headings and important terms.

2\. \*\*Italic text:\*\* Emphasizes technical terminology.

3\. \*\*Monospaced text:\*\* Displays programming commands and code.

4\. \*\*Font sizes:\*\* Establishes visual hierarchy.

5\. \*\*Text alignment:\*\* Improves the appearance of paragraphs.



\## 2.9 Practical Example



A complete practical example demonstrating text formatting is available here:



\[02-text-formatting.tex](Examples/02-text-formatting.tex)



\## 2.10 Conclusion



Text formatting and font commands help create readable and professional LaTeX documents. Understanding font styles, font sizes, font families, and alignment is important for preparing well-structured technical reports and academic documents.



