.model small
.stack 100h
.data
    
    a db ?
    str db "Enter the value of X:$"
    str2 db "Do you want to give another input?$"
    str3 db "Given input is a Consonant$"
    str4 db "Given input is a Vowel$"
    str5 db "Given input is a Number$"
    str6 db "Invalid input$"

.code
main proc
    
    ;Moving all variables
    mov ax,@data
    mov ds,ax
    
    top:
    
    ;Print enter string
    mov ah,9
    lea dx,str 
    int 21h  
    
    ;input character
    mov ah,1
    int 21h
    mov a,al
    
    ;checks if it is a number
    cmp a,48
    jge check_num
    jmp others:
    
    check_num:
    cmp a,57
    jle Number 
    
    
    ;checks if it is a letter
    cmp a,65
    jge check_letter
    jmp others:
    
    
    check_letter:
    cmp a,90
    jle Char
    jmp others:
    
    
    Char:
    cmp a,65
    je vowel
    cmp a,69
    je vowel
    cmp a,73
    je vowel
    cmp a,79
    je vowel
    cmp a,85
    je vowel
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,9     
    lea dx,str3  ;prints consonant
    int 21h
    jmp exit
    
    
    
    
    Number: 
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,9
    lea dx,str5   ;prints number
    int 21h
    jmp exit   
    
    
    vowel:
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,9
    lea dx,str4    ;prints vowel
    int 21h
    jmp exit 
    
    
    others:
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,9
    lea dx,str6      ;prints invalid
    int 21h
    jmp exit
    
    exit:
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,9
    lea dx,str2     ;asks for more input
    int 21h 
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    mov ah,1
    int 21h 
    mov a,al 
    
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    cmp a,'Y'
    je top
    
    mov ah,4ch
    int 21h
    main endp
end main