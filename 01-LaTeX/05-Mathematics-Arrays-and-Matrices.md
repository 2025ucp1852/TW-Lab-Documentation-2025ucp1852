

\# 5. Mathematics, Arrays and Matrices in LaTeX



\## 5.1 Introduction



LaTeX is widely used for mathematical and scientific documents because it provides commands for equations, symbols, arrays, and matrices.



The `amsmath` and `amssymb` packages provide additional mathematical features.



```latex

\\usepackage{amsmath,amssymb}

```



\## 5.2 Inline Mathematics



Inline mathematics is written between dollar signs.



```latex

The equation is $a^2+b^2=c^2$.

```



\## 5.3 Display Mathematics



Display mathematics places an equation on a separate line.



```latex

\\\[

a^2+b^2=c^2

\\]

```



\## 5.4 Fractions and Square Roots



```latex

\\\[

\\frac{a+b}{c}

\\]



\\\[

\\sqrt{x^2+y^2}

\\]

```



\- `\\frac{a}{b}` creates a fraction.

\- `\\sqrt{x}` creates a square root.



\## 5.5 Subscripts and Superscripts



```latex

\\\[

x\_1,\\quad x\_2,\\quad x^2,\\quad x^{n+1}

\\]

```



An underscore creates a subscript, while a caret creates a superscript.



\## 5.6 Greek Letters



```latex

\\\[

\\alpha,\\beta,\\gamma,\\theta,\\lambda,\\pi,\\sigma

\\]

```



Greek letters are commonly used in scientific equations.



\## 5.7 Summation, Integration and Limits



```latex

\\\[

\\sum\_{i=1}^{n} i

\\]



\\\[

\\int\_0^1 x^2\\,dx

\\]



\\\[

\\lim\_{x\\to 0}\\frac{\\sin x}{x}

\\]

```



\## 5.8 Equation Environment



The `equation` environment creates a numbered equation.



```latex

\\begin{equation}

E=mc^2

\\end{equation}

```



\## 5.9 Align Environment



The `align` environment aligns multiple equations.



```latex

\\begin{align}

a+b \&= c \\\\

x+y \&= z

\\end{align}

```



The ampersand specifies the alignment position.



\## 5.10 Arrays



The `array` environment creates mathematical arrangements in rows and columns.



```latex

\\\[

\\begin{array}{cc}

1 \& 2 \\\\

3 \& 4

\\end{array}

\\]

```



The `{cc}` option specifies two centered columns.



\## 5.11 Matrices



LaTeX supports different matrix styles.



```latex

\\\[

\\begin{matrix}

1 \& 2 \\\\

3 \& 4

\\end{matrix}

\\]



\\\[

\\begin{pmatrix}

1 \& 2 \\\\

3 \& 4

\\end{pmatrix}

\\]



\\\[

\\begin{bmatrix}

1 \& 2 \\\\

3 \& 4

\\end{bmatrix}

\\]



\\\[

\\begin{vmatrix}

1 \& 2 \\\\

3 \& 4

\\end{vmatrix}

\\]

```



\- `matrix` creates a matrix without brackets.

\- `pmatrix` creates a matrix with parentheses.

\- `bmatrix` creates a matrix with square brackets.

\- `vmatrix` creates a determinant-style arrangement.



\## 5.12 Practical Applications



Mathematical LaTeX is useful for:

\- Scientific equations.

\- Engineering calculations.

\- Mathematical reports.

\- Matrices and determinants.

\- Statistical expressions.



\## 5.13 Conclusion



Mathematical commands, arrays, and matrices allow users to create clear and professional scientific documents.



