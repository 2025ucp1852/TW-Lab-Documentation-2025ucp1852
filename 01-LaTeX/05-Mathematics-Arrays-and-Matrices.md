
# 5. Mathematics, Arrays and Matrices in LaTeX

## 5.1 Introduction

LaTeX is widely used for mathematical and scientific documents because it provides commands for equations, symbols, arrays, and matrices.

The `amsmath` and `amssymb` packages provide additional mathematical features.

```latex
\usepackage{amsmath,amssymb}
```

## 5.2 Inline Mathematics

Inline mathematics is written between dollar signs.

### Example

```latex
The equation is $a^2+b^2=c^2$.
```

This displays the mathematical expression within a sentence.

## 5.3 Display Mathematics

Display mathematics places an equation on a separate line.

### Example

```latex
\[
a^2+b^2=c^2
\]
```

Display equations are useful when mathematical expressions need more emphasis or space.

## 5.4 Fractions and Square Roots

LaTeX provides commands to create fractions and square roots.

### Example

```latex
\[
\frac{a+b}{c}
\]

\[
\sqrt{x^2+y^2}
\]
```

**Explanation:**

- `\frac{a}{b}` creates a fraction.
- `\sqrt{x}` creates a square root.
- `\sqrt[n]{x}` creates the nth root of x.

## 5.5 Subscripts and Superscripts

Subscripts and superscripts are commonly used in mathematical expressions.

### Example

```latex
\[
x_1,\quad x_2,\quad x^2,\quad x^{n+1}
\]
```

An underscore `_` creates a subscript, while a caret `^` creates a superscript.

Braces `{}` are used when a subscript or superscript contains more than one character.

## 5.6 Greek Letters

LaTeX provides commands for displaying Greek letters commonly used in scientific equations.

### Example

```latex
\[
\alpha,\beta,\gamma,\theta,\lambda,\pi,\sigma
\]
```

Some common Greek letter commands include:

| Command | Symbol |
|---|---|
| `\alpha` | α |
| `\beta` | β |
| `\gamma` | γ |
| `\theta` | θ |
| `\lambda` | λ |
| `\pi` | π |
| `\sigma` | σ |
| `\omega` | ω |

## 5.7 Summation, Integration and Limits

LaTeX provides commands for common mathematical operations.

### Example

```latex
\[
\sum_{i=1}^{n} i
\]

\[
\int_0^1 x^2\,dx
\]

\[
\lim_{x\to 0}\frac{\sin x}{x}
\]
```

**Explanation:**

- `\sum` represents summation.
- `\int` represents integration.
- `\lim` represents a limit.
- `\to` represents an arrow indicating a limit or direction.

## 5.8 Equation Environment

The `equation` environment creates a numbered equation.

### Example

```latex
\begin{equation}
E=mc^2
\end{equation}
```

The equation is automatically assigned a number.

To create an unnumbered equation, use the `equation*` environment provided by the `amsmath` package.

## 5.9 Align Environment

The `align` environment aligns multiple equations.

### Example

```latex
\begin{align}
a+b &= c \\
x+y &= z
\end{align}
```

The ampersand `&` specifies the alignment position, and `\\` starts a new line.

The `align` environment is provided by the `amsmath` package.

## 5.10 Arrays

The `array` environment creates mathematical arrangements in rows and columns.

### Example

```latex
\[
\begin{array}{cc}
1 & 2 \\
3 & 4
\end{array}
\]
```

The `{cc}` option specifies two centered columns.

Common column alignment options include:

- `l` for left alignment.
- `c` for center alignment.
- `r` for right alignment.

## 5.11 Matrices

LaTeX supports different matrix styles through the `amsmath` package.

### Example

**1. Matrix without brackets**

```latex
\[
\begin{matrix}
1 & 2 \\
3 & 4
\end{matrix}
\]
```

**2. Matrix with parentheses**

```latex
\[
\begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}
\]
```

**3. Matrix with square brackets**

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

**4. Determinant-style arrangement**

```latex
\[
\begin{vmatrix}
1 & 2 \\
3 & 4
\end{vmatrix}
\]
```

**Explanation:**

- `matrix` creates a matrix without brackets.
- `pmatrix` creates a matrix with parentheses.
- `bmatrix` creates a matrix with square brackets.
- `vmatrix` creates a determinant-style arrangement.

## 5.12 Practical Applications

Mathematical LaTeX is useful for:

- Scientific equations.
- Engineering calculations.
- Mathematical reports.
- Matrices and determinants.
- Statistical expressions.

## 5.13 Conclusion

Mathematical commands, arrays, and matrices allow users to create clear and professional scientific documents. LaTeX provides flexible tools for representing complex mathematical expressions in academic and technical writing.
