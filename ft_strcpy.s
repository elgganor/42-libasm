	section .text
	global _ft_strcpy
_ft_strcpy:
	mov		rax, 0
	mov		rcx, 0
while:
	mov bl, byte [rsi + rcx]
	cmp bl, 0
	je end
	mov byte [rdi + rcx], bl
	inc rcx
	jmp while
end:
	mov bl, 0
	mov byte [rdi + rax], bl
	mov rax, rdi
	ret