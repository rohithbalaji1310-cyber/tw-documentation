# LaTeX

## 1. What is LaTeX?
LaTeX is a document preparation system built on TeX (we have used tex studio before in classes). Instead of WYSIWYG editing, you write
plain-text source with markup commands and compile it into a PDF. It excels at scientific
documents, theses, equations, bibliographies and consistent formating.

**Advantages:** high-quality typography, excellent maths support, automatic numbering,
cross-references and bibliographies, plain-text source that works well with version control.
**Disadvantages:** learning curve; layout is controlled indirectly.

## 2. Tools
- Distributions: TeX Live (Linux/Windows), MiKTeX (Windows), MacTeX (macOS)
- Editors: TeXstudio, TeXworks, VS Code + LaTeX Workshop, Overleaf (online)
- Compile: `pdflatex file.tex` (run twice for references; `bibtex` / `biber` for bibliography)

## 3. Document structure
```latex
\documentclass[12pt,a4paper]{article}   % preamble starts
\usepackage{graphicx}
\title{My Title}
\author{Me}
\date{\today}
\begin{document}                        % body starts
\maketitle
\section{Introduction}
Hello, \LaTeX!
\end{document}
```
Common classes: `article`, `report`, `book`, `letter`, `beamer`.

## 4. Text formatting
| Command | Result |
|---------|--------|
| `\textbf{x}` | bold |
| `\textit{x}` | italic |
| `\underline{x}` | underlined |
| `\texttt{x}` | monospace |
| `\emph{x}` | emphasis |
| `\\` or blank line | new line / new paragraph |

Font sizes: `\tiny \small \normalsize \large \Large \huge`.

## 5. Sections, lists and tables
```latex
\section{A}  \subsection{B}  \subsubsection{C}

\begin{itemize}  \item One \item Two \end{itemize}
\begin{enumerate} \item First \item Second \end{enumerate}

\begin{table}[h]
  \centering
  \begin{tabular}{|l|c|r|}
    \hline
    Name & Age & Score \\ \hline
    Asha & 20 & 91 \\
    Ravi & 21 & 85 \\ \hline
  \end{tabular}
  \caption{Student scores}\label{tab:scores}
\end{table}
```

## 6. Mathematics
Inline: `$E = mc^2$`. Display:
```latex
\begin{equation}
  \int_0^\infty e^{-x^2}\,dx = \frac{\sqrt{\pi}}{2}
\end{equation}
```
Use `amsmath` for `align`, matrices, etc.

## 7. Figures
```latex
\usepackage{graphicx}
\begin{figure}[ht]
  \centering
  \includegraphics[width=0.6\textwidth]{images/plot.png}
  \caption{A plot}\label{fig:plot}
\end{figure}
```

## 8. Cross-references, TOC and bibliography
```latex
\tableofcontents
See Figure~\ref{fig:plot} and Table~\ref{tab:scores}.
According to \cite{knuth84}, ...

\begin{thebibliography}{9}
  \bibitem{knuth84} D.~Knuth, \emph{The TeXbook}, Addison-Wesley, 1984.
\end{thebibliography}
```
For larger projects use a `.bib` file with BibTeX/BibLaTeX.

## 9. Useful packages
`amsmath`, `graphicx`, `hyperref` (clickable links), `geometry` (margins), `listings` (source code),
`xcolor`, `booktabs` (nice tables), `tikz` (diagrams), `biblatex`.

## 10. Common errors
- Missing `$` → maths symbol used outside maths mode
- Undefined control sequence → typo or missing package
- References show `??` → compile again
- Special characters need escaping: `\# \$ \% \& \_ \{ \}`

## 11. Example
See [`examples/latex/sample.tex`](../examples/latex/sample.tex).
