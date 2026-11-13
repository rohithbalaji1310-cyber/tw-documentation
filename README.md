# Technical Writing (TW) Course Documentation

A documentation repository summarising what I learned in my Technical Writing course lecturess about
**LaTeX, Beamer, Doxygen, Google Docs, Git and GitHub**.

> **Author:** _Rohith Balaji_ · **Roll No.:** _2025UCP1942_ · **Course:** Technical Writing

## Contents

| Topic | Documentation | Hands-on example |
|-------|---------------|------------------|
| LaTeX | [docs/latex.md](docs/latex.md) | [examples/latex/sample.tex](examples/latex/sample.tex) |
| Beamer | [docs/beamer.md](docs/beamer.md) | [examples/beamer/presentation.tex](examples/beamer/presentation.tex) |
| Doxygen | [docs/doxygen.md](docs/doxygen.md) | [examples/doxygen/](examples/doxygen/) |
| Google Docs | [docs/google-docs.md](docs/google-docs.md) | – |
| Git | [docs/git.md](docs/git.md) | – |
| GitHub | [docs/github.md](docs/github.md) | – |

## Repository structure

```
tw-documentation/
|_ README.md
|_ LICENSE
|_ itignore
|_ docs/
|   |_ index.md
|   |_ latex.md
|   |_ beamer.md
|   |_ doxygen.md
|   |_ google-docs.md
|   |_ git.md
|   |_ github.md
|_ examples/
|   |_ latex/sample.tex
|   |_ beamer/presentation.tex
|   |_ doxygen/
|       |_ Doxyfile
|       |_ src/calculator.h, calculator.c
|_ images/            (screenshots and figures)
```

## How to build the examples

```bash
# LaTeX document
cd examples/latex && pdflatex sample.tex && pdflatex sample.tex

# Beamer slides
cd examples/beamer && pdflatex presentation.tex

# Doxygen HTML docs (output goes to examples/doxygen/html/)
cd examples/doxygen && doxygen Doxyfile
```

## License
Released under the [MIT License](LICENSE).
