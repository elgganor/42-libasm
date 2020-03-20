	section .text
	global _ft_strcpy
_ft_strcpy:
	mov		rcx, 0
	cmp rdi, 0
	je end
	cmp rsi, 0
	je end
while:
	cmp byte [rsi + rcx], 0
	je end
	mov bl, byte [rsi + rcx]
	mov byte [rdi + rcx], bl
	cmp byte [rdi + rcx], 0
	je end
	inc rcx
	jmp while
end:
	mov		rax, rdi
	ret