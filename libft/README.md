_his project has been created as part of the 42 curriculum by esaliba_


## Description

This is the libft project, the first project from the core curriculum.  
The goal of the project is to create a static library that contains a collection of functions to be later in future C projects.     
The functions are:
### Part 1 – Libc functions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Part 2 – Additional functions

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Part 3 – Linked list

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar` (used to build the static library)

### Compilation

Clone the repository and build the library from its root:

```bash
git clone <repository_url> libft
cd libft
make
```

This compiles every `.c` file and creates `libft.a` at the root of the repository.

### Makefile rules

| Rule     | Description                                        |
|----------|----------------------------------------------------|
| `make`   | Same as `make all`                                 |
| `all`    | Builds `libft.a`                                   |
| `clean`  | Removes the object files (`.o`)                    |
| `fclean` | Removes the object files and `libft.a`             |
| `re`     | Runs `fclean` then `all` to rebuild from scratch   |

### Usage

Include the header in your source files:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Werror -Wextra main.c libft.a -o program
```
or more verbosely:

```bash
cc main.c -Wall -Werror -Wextra -I <libft.h_dir> -L <libft.a_dir> -l ft -o program
```

Note: `-l ft` gets automatically resolved to libft.a.

## Resources

### Books

- `C Programming: A Modern Approach (Second Edition)`
- `Computer Systems: Programmers Perspective`

### AI

I wrote everything by hand, and tried my best to make sure everything works (testing/debugging).    
I used AI at the end to check for errors and bugs I hadn't caught myself.      
Those bugs consisted mostly of "off by one" errors and forgotten null checks.       
The AI wrote a list of the problems it found, which I later fixed myself.      