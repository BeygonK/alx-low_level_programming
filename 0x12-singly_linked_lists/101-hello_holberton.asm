section .data
	hello db 'Hello, Holberton', 0
	helloLen equ $-hello

section .text
	extern printf
	global main

main:
	; Prepare arguments for printf
	mov rdi, hello
	xor rax, rax

	; Call printf
	call printf

	; Return 0
	mov eax, 0x60
	xor edi, edi
	syscall
