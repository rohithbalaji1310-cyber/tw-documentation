# Beamer

## 1. What is Beamer?
Beamer is a LaTeX document class for creating slide presentations. It gives the same benefits
as LaTeX (maths, bibliographies, consistent style) and outputs a PDF that can be shown on any device.

## 2. Basic structure
```latex
\documentclass{beamer}
\usetheme{Madrid}
\usecolortheme{beaver}
\title{My Presentation}
\author{Me}
\date{\today}

\begin{document}
\begin{frame}
  \titlepage
\end{frame}

\begin{frame}{Outline}
  \tableofcontents
\end{frame}

\section{Introduction}
\begin{frame}{Hello}
  Content here.
\end{frame}
\end{document}
```

## 3. Frames, blocks and columns
```latex
\begin{frame}{Title}
  \begin{block}{Definition} ... \end{block}
  \begin{alertblock}{Warning} ... \end{alertblock}
  \begin{exampleblock}{Example} ... \end{exampleblock}

  \begin{columns}
    \column{0.5\textwidth} Left text
    \column{0.5\textwidth} \includegraphics[width=\textwidth]{img.png}
  \end{columns}
\end{frame}
```

## 4. Overlays (step-by-step reveal)
```latex
\begin{itemize}
  \item<1-> Appears first
  \item<2-> Appears second
  \item<3-> Appears third
\end{itemize}
\pause   % reveals the rest after a click
\only<2>{Shown only on slide 2}
\uncover<3->{Shown from slide 3}
```

## 5. Themes
- Presentation themes: `Madrid`, `Berlin`, `Warsaw`, `CambridgeUS`, `Copenhagen`, `metropolis`
- Colour themes: `beaver`, `dolphin`, `crane`, `seahorse`
- Font themes: `serif`, `structurebold`

## 6. Tips for good slides
1. One idea per slide; keep text short.
2. Use figures and diagrams over paragraphs.
3. Use at least 18 pt font; ensure high contrast.
4. Use `\begin{frame}[fragile]` when including verbatim code.
5. Add speaker notes with `\note{...}`.

## 7. Example
See [`examples/beamer/presentation.tex`](../examples/beamer/presentation.tex).
