setion .rodata
fmt: db 'Hello, %s', 10, 0
msg: db 'Holberton', 0

section .text
global main
extern printf

main:
; printf(fmt, msg)
mov rdi, fmt
mov rsi, msg
;no XMM registers
mov rax, 0
call printf
;return 0
mov rax, 0
ret
