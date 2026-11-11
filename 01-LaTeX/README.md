# LaTeX Documentation — TW Lab 2026

## 1. Introduction

This section provides organized documentation and practical LaTeX programs based on the Technical Writing Lab lecture materials.

LaTeX is a document preparation system used to create academic reports, research papers, technical documents, mathematical expressions, tables, and presentations.

## 2. Learning Objectives

After completing this section, students should be able to:

- Understand the basic structure of a LaTeX document.
- Use document classes and packages.
- Format text and select font sizes.
- Control page layout, spacing, and page numbering.
- Create lists, tables, and mathematical expressions.
- Insert figures and graphics.
- Draw diagrams using the picture environment.
- Apply colors and create boxes.
- Identify and correct common LaTeX errors.

## 3. Lecture Topics

| No. | Topic | Documentation |
|---|---|---|
| 1 | Introduction and Structure | [Read](01-Introduction-and-Structure.md) |
| 2 | Text Formatting and Fonts | [Read](02-Text-Formatting-and-Fonts.md) |
| 3 | Page Layout, Spacing and Numbering | [Read](03-Page-Layout-Spacing-and-Numbering.md) |
| 4 | Environments and Lists | [Read](04-Environments-and-Lists.md) |
| 5 | Mathematics, Arrays and Matrices | [Read](05-Mathematics-Arrays-and-Matrices.md) |
| 6 | Tables and Tabular Material | [Read](06-Tables-and-Tabular-Material.md) |
| 7 | Figures, Graphics and Picture | [Read](07-Figures-Graphics-and-Picture.md) |
| 8 | Colors and Customization | [Read](08-Colors-and-Customization.md) |
| 9 | Boxes, Index, Bibliography and Troubleshooting | [Read](09-Boxes-Index-Bibliography-and-Troubleshooting.md) |

## 4. Practical LaTeX Programs

The following programs demonstrate important LaTeX commands.

| No. | Program | Source File |
|---|---|---|
| 1 | Basic LaTeX document | [01-basic-document.tex](Examples/01-basic-document.tex) |
| 2 | Text formatting and lists | [02-text-formatting.tex](Examples/02-text-formatting.tex) |
| 3 | Mathematics and matrices | [03-mathematics-and-matrices.tex](Examples/03-mathematics-and-matrices.tex) |
| 4 | Tables and figures | [04-tables-and-figures.tex](Examples/04-tables-and-figures.tex) |
| 5 | Picture environment | [05-picture-environment.tex](Examples/05-picture-environment.tex) |
| 6 | Colors and boxes | [06-colors-and-boxes.tex](Examples/06-colors-and-boxes.tex) |

## 5. Important LaTeX Packages

| Package | Purpose |
|---|---|
| `amsmath` | Mathematical expressions |
| `graphicx` | Inserting images |
| `xcolor` | Text and background colors |
| `geometry` | Page margins |
| `fancyhdr` | Headers and footers |
| `fontspec` | System fonts with XeLaTeX or LuaLaTeX |
| `rotating` | Rotating figures and tables |

## 6. How to Compile a LaTeX Program

1. Open a LaTeX editor such as TeXstudio or an online LaTeX editor.
2. Open the required `.tex` file.
3. Select the appropriate compiler.
4. Compile the program.
5. View the generated PDF and check the output.

**Note:** Programs using `fontspec` require XeLaTeX or LuaLaTeX. The basic examples in this repository are designed for pdfLaTeX unless stated otherwise.

## 7. References

This documentation is organized around the supplied Technical Writing Lab lecture material, including LaTeX basics, environments, mathematical expressions, arrays and matrices, figures, graphics, colors, and the picture environment.

## 8. Conclusion

This section combines explanations of LaTeX commands with practical source-code examples. It serves as a reference for preparing structured academic and technical documents.