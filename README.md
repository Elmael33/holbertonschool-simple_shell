
# Simple Shell
This project from Holberton School is to develop our own shell that enhances user interaction with the operating system, offering advanced features and an intuitive interface.

## Mandatory Tasks
* Write a README / Write a man for your shell
* Write a AUTHORS file at the root of your repository
* Write a beautiful code that passes the Betty checks
* Write a UNIX command line interpreter.
* Handle command lines with arguments
* Handle the PATH
* Implement the exit built-in, that exits the shell
* Implement the env built-in, that prints the current environment

## Prototypes
* ```void prompt(void)``` display the prompt
* ```char **read_line(void)``` get the size of the token
* ```void execute_command(char **argv)``` execute the fonction 


## Requirements
* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 20.04 LTS using gcc.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks.
* No more than 5 functions per file.
* All your header files should be include guarded.
* Use system calls only when you need to

## Compilation

* Command: ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```

## Usage and Example

### Interactive Mode
To run the simple_shell interactively, execute:
```sh
$ ./hsh
```

### Non-Interactive Mode

You can also run the shell in non-interactive mode by redirecting commands or providing a script file.

**Example 1:** Command Redirection via echo
```sh
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
```

## MAN page
Located at the root of the project. See [Man Page](https://github.com/Elmael33/holbertonschool-simple_shell/blob/mael/Man_Page)

## Flowchart of Simple Shell
![flowchart](https://github.com/Elmael33/holbertonschool-simple_shell/blob/mael/flowchart-shell.png)

## Authors
- Sofiane Slimane <8825@holbertonstudents.com>
- Mael Salet <8920@holbertonstudents.com> 
