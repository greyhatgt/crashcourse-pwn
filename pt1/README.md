# Crash course pwn 1

## How to compile and debug C

Compile c programs:
```
gcc mycode.c -o myprogram
```
Will compile the file mycode.c, creating the resulting compiled executable in the myprogram file.
`gcc` is the name of the compiler. There are also options, such as [clang](https://clang.llvm.org/)

`-o` specifies the name of the executable machine code file that gets created. If not included, name defaults to `a.out`


Run the program:
```
./myprogram
```

Use -g to compile a program with symbols (preserves function/ variable names in compiled binary, makes debugging easier):

```
gcc mycode.c -o myprogram
```


Debug the progrm with gdb
```
gdb ./myprogram
```

## C basics

- Variables have types
    - ints, doubles, long long
- No boolean type
    - Anything that is 0 is treated as false
    - Anything that is not 0 is treated as true
- Control Flow
    - If Statements
    - While Loops
    - For Loops
- Include statements (imports)
- Pointers
    - Memory locations of where the program data is stored


## Basic debugging w/ gdb

```
# anything after a pound sign is a comment
break main # sets a breakpoint at the start of the main function
layout src # sets the layout to source code view mode
run # runs the program, stopping whenever a breakpoint condition is met
next # steps through the program code
print x # prints the value of the variable x
```


## Open compiled program in Ghidra

1. Create new non-shared project
2. Click import, import the compiled binary
3. Double click the program once it shows up in the view to open it in the decompiler


## Basic Buffer Overflow
- pwn debugging with pwndbg
