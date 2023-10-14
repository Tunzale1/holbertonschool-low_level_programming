0) *gcc -E $CFILE -o c* - runs a $CFILE through the preprocessor and save the result into another file.
1) *gcc $CFILE -c* -  compiles a $CFILE  but does not link.
2) *gcc -c -S $CFILE* - generates the assembly code of a C code and save it in an output file3) *gcc $CFILE -o cisfun* - compiles a $CFILE and creates an executable named cisfun
4) *puts()* -  prints
5) *printf()* -  prints
6) *%zu, %d* -print the variables of size_t length

"-o, -c" - control the behavior of the compiler and the resulting output.
gcc => GNU Compiler Collection
