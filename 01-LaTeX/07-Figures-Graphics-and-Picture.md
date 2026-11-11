

\# 7. Figures, Graphics and Picture Environment



\## 7.1 Introduction



Figures and graphics improve the presentation of technical documents. LaTeX supports external images and simple drawings using the `graphicx` package and the `picture` environment.



\## 7.2 Including Graphics



Load the package:



```latex

\\usepackage{graphicx}

```



Insert an image:



```latex

\\includegraphics\[width=0.7\\textwidth]{diagram.png}

```



The image file must be available in the project directory or at the specified path.



\## 7.3 Figure Environment



The `figure` environment allows images to have captions and labels.



```latex

\\begin{figure}\[ht]

\\centering

\\includegraphics\[width=0.6\\textwidth]{diagram.png}

\\caption{Sample Technical Diagram}

\\label{fig:diagram}

\\end{figure}

```



\## 7.4 Figure References



Figures can be referenced in the document.



```latex

Figure \\ref{fig:diagram} shows the technical diagram.

```



The `\\label` command identifies the figure, while `\\ref` displays its number.



\## 7.5 Figure Placement



Common placement options include:



| Option | Meaning |

|---|---|

| `h` | Approximately here. |

| `t` | Top of a page. |

| `b` | Bottom of a page. |

| `p` | A page containing floats. |

| `!` | Requests that LaTeX relax some placement restrictions. |



For example:



```latex

\\begin{figure}\[htbp]

```



\## 7.6 Picture Environment



The `picture` environment allows simple drawings using coordinates.



```latex

\\setlength{\\unitlength}{1mm}



\\begin{picture}(50,30)

\\put(10,10){\\circle{10}}

\\put(30,10){\\framebox(15,10){Box}}

\\end{picture}

```



\## 7.7 Drawing Commands



| Command | Purpose |

|---|---|

| `\\put(x,y){...}` | Places an object at coordinates. |

| `\\line(x,y){length}` | Draws a line. |

| `\\vector(x,y){length}` | Draws a vector. |

| `\\circle{diameter}` | Draws a circle. |

| `\\circle\*{diameter}` | Draws a filled circle. |

| `\\oval(width,height)` | Draws an oval. |

| `\\framebox(width,height){text}` | Creates a framed box. |

| `\\makebox(width,height){text}` | Creates a box without a frame. |



\## 7.8 Repeated Objects



The `\\multiput` command places repeated objects.



```latex

\\setlength{\\unitlength}{1mm}



\\begin{picture}(60,20)

\\multiput(5,5)(10,0){5}{\\circle{4}}

\\end{picture}

```



This creates five circles with equal horizontal spacing.



\## 7.9 Practical Applications



Figures and drawings are useful for:

\- Flowcharts and diagrams.

\- Scientific illustrations.

\- Technical reports.

\- Graphs and screenshots.

\- Geometric drawings.



\## 7.10 Conclusion



LaTeX supports external graphics and basic drawings. Captions and references help integrate figures into well-organized technical documents.



