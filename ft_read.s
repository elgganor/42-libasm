	section .text
	global _ft_read
	extern ___error

_ft_read:
	mov rax, 0x02000003
	syscall
	jc error
	ret

error:
	mov rdx, rax
	push rdx
	call ___error
	pop rdx
	mov [rax], rdx
	mov rax, -1
	ret
