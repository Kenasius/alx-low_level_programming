global   main
	  extern    printf
main:
	mov edi, format	   ; Set EDI to point to the format string
	xor eax, eax       ; Clear EAX (return value)
	call printf        ; Call the printf function
	mov eax, 0         ; Set return value to 0
	ret
format: db `Hello, Holberton\n`,0

