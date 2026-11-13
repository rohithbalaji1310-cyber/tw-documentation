# Doxygen

## 1. What is Doxygen?
Doxygen is a documentation generator. It reads specially formatted comments in source code
(C, C++, Java, Python, PHP and more) and produces HTML, LaTeX/PDF, RTF and man pages, along with
class diagrams and call graphs (via Graphviz).

## 2. Installation
```bash
sudo apt install doxygen graphviz     # Debian/Ubuntu
```

## 3. Workflow
```bash
doxygen -g Doxyfile      # generate a default config
# edit Doxyfile (see key options below)
doxygen Doxyfile         # produce documentation in html/ and latex/
```

## 4. Key Doxyfile options
| Option | Purpose |
|--------|---------|
| `PROJECT_NAME` | Title of the project |
| `INPUT` | Source folders/files |
| `RECURSIVE` | Search sub-directories |
| `EXTRACT_ALL` | Document even undocumented entities |
| `GENERATE_HTML` / `GENERATE_LATEX` | Output formats |
| `HAVE_DOT` | Enable Graphviz diagrams |
| `USE_MDFILE_AS_MAINPAGE` | Use README.md as front page |

## 5. Comment styles
```c
/**
 * @brief  Adds two integers.
 * @param  a First operand.
 * @param  b Second operand.
 * @return The sum a + b.
 */
int add(int a, int b);

/// One-line brief description
int x;      ///< Trailing comment documenting a member
```

## 6. Common commands
| Command | Meaning |
|---------|---------|
| `@file` | Describes a file |
| `@brief` | Short description |
| `@details` | Long description |
| `@param[in/out]` | Parameter documentation |
| `@return` | Return value |
| `@note`, `@warning`, `@todo`, `@bug` | Annotations |
| `@see`, `@ref` | Cross-references |
| `@author`, `@version`, `@date` | Metadata |
| `@code ... @endcode` | Code sample |

## 7. Example
See [`examples/doxygen/`](../examples/doxygen/). Build with:
```bash
cd examples/doxygen && doxygen Doxyfile && xdg-open html/index.html
```
