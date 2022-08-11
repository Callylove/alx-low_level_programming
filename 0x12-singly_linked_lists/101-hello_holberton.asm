extern printf ; the C function, to be called
section .data ; data structure, initialized variables
msg: db "Hello, Holberton", 0 ; C string needs 0
fmt: db "%s", 10, 0 ; The printf format, "/0", '0'
section .text ; Code section

global main ; standard gcc entry point
main: ; the program label for the entry point
push rbp ; set up the stack frame, must be aligned
mov rdi,fmt
mov rsi,msg
mov rax,0 ; or can be xor raw, rax
call printf ; Call C functiom

pop rbp ; restore stack

mov rax,0 ; normal, no error, return value
ret ; return
