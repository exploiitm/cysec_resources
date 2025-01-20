# Basics

`backtrace.c` shows you how function stackframes work. In particular, set
breakpoints at each function, each function's `leave`/`pop rbp` instructions
and each function's `ret` instructions and see how the values of `$rbp` and
`$rsp` change and how it affects program execution.

`buffer.c` is very simple in principle. Overflow the buffer to change the
variable value. This will be helpful for you in calculating offsets.

`env_vars.c` shows you how env flags are iterated through.

`spawn_shell.c` shows you how you can spawn a shell from a program.
