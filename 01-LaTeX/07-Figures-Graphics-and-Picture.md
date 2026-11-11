
# 7. Figures, Graphics and Picture Environment

## 7.1 Introduction

Figures and graphics improve the presentation of technical documents. LaTeX supports external images and simple drawings using the `graphicx` package and the `picture` environment.

Graphics are useful for presenting diagrams, screenshots, flowcharts, scientific illustrations, and other visual information.

## 7.2 Including Graphics

The `graphicx` package is used to insert external images into a LaTeX document.

### Load the Package

```latex
\usepackage{graphicx}
```

### Insert an Image

```latex
\includegraphics[width=0.7\textwidth]{diagram.png}
```

The image file must be available in the project directory or at the specified path.

**Explanation:**

- `\includegraphics{}` inserts an image.
- `width=0.7\textwidth` sets the image width to 70% of the text width.
- `diagram.png` specifies the image filename.

Other options include `height`, `scale`, and `angle`.

## 7.3 Figure Environment

The `figure` environment allows images to have captions and labels.

### Example

```latex
\begin{figure}[ht]
\centering
\includegraphics[width=0.6\textwidth]{diagram.png}
\caption{Sample Technical Diagram}
\label{fig:diagram}
\end{figure}
```

**Explanation:**

- `figure` creates a floating figure environment.
- `\centering` centers the image.
- `\includegraphics` inserts the image.
- `\caption{}` adds a figure caption.
- `\label{}` assigns an identifier for referencing the figure.

## 7.4 Figure References

Figures can be referenced in the document using the `\ref` command.

### Example

```latex
Figure \ref{fig:diagram} shows the technical diagram.
```

The `\label` command identifies the figure, while `\ref` displays its number.

**Note:** Place `\label` after `\caption` to ensure that it refers to the correct figure number. LaTeX may require multiple compilations to resolve references.

## 7.5 Figure Placement

Common figure placement options include:

| Option | Meaning |
|---|---|
| `h` | Approximately here. |
| `t` | Top of a page. |
| `b` | Bottom of a page. |
| `p` | A page containing floats. |
| `!` | Requests that LaTeX relax some placement restrictions. |

### Example

```latex
\begin{figure}[htbp]
```

These options suggest possible positions for the figure. They do not always guarantee an exact position.

## 7.6 Picture Environment

The `picture` environment allows simple drawings using coordinates.

### Example

```latex
\setlength{\unitlength}{1mm}

\begin{picture}(50,30)
\put(10,10){\circle{10}}
\put(30,10){\framebox(15,10){Box}}
\end{picture}
```

**Explanation:**

- `\unitlength` specifies the measurement unit.
- `\begin{picture}(50,30)` defines the drawing area.
- `\put(x,y){...}` places an object at the specified coordinates.
- `\circle{10}` creates a circle with a diameter of 10 units.
- `\framebox(15,10){Box}` creates a rectangular box containing the word Box.

## 7.7 Drawing Commands

The `picture` environment provides commands for creating simple drawings.

| Command | Purpose |
|---|---|
| `\put(x,y){...}` | Places an object at coordinates. |
| `\line(x,y){length}` | Draws a line. |
| `\vector(x,y){length}` | Draws a vector. |
| `\circle{diameter}` | Draws a circle. |
| `\circle*{diameter}` | Draws a filled circle. |
| `\oval(width,height)` | Draws an oval. |
| `\framebox(width,height){text}` | Creates a framed box. |
| `\makebox(width,height){text}` | Creates a box without a frame. |

## 7.8 Repeated Objects

The `\multiput` command places repeated objects at regular intervals.

### Example

```latex
\setlength{\unitlength}{1mm}

\begin{picture}(60,20)
\multiput(5,5)(10,0){5}{\circle{4}}
\end{picture}
```

This creates five circles with equal horizontal spacing.

**Explanation:**

The syntax of `\multiput` is:

```latex
\multiput(x,y)(dx,dy){number}{object}
```

- `(x,y)` specifies the starting position.
- `(dx,dy)` specifies the distance between objects.
- `number` specifies how many objects to create.
- `object` specifies the drawing to repeat.

## 7.9 Complete Practical Example

The following example demonstrates how to insert an image with a caption and label.

### Example

```latex
\documentclass{article}

\usepackage{graphicx}

\begin{document}

\section{Figures in LaTeX}

Figure \ref{fig:diagram} shows a sample technical diagram.

\begin{figure}[ht]
\centering
\includegraphics[width=0.6\textwidth]{diagram.png}
\caption{Sample Technical Diagram}
\label{fig:diagram}
\end{figure}

\end{document}
```

**Note:** Place `diagram.png` in the same directory as the `.tex` file before compiling. Replace the filename with the name of your actual image if necessary.

## 7.10 Practical Applications

Figures and drawings are useful for:

- Flowcharts and diagrams.
- Scientific illustrations.
- Technical reports.
- Graphs and screenshots.
- Geometric drawings.

## 7.11 Conclusion

LaTeX supports external graphics and basic drawings. Captions and references help integrate figures into well-organized technical documents. The `graphicx` package and `picture` environment provide useful tools for adding visual content to technical and academic documents.
