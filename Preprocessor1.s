	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 0
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	w8, [x29, #-12]                 ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	mov	w8, #10
	stur	w8, [x29, #-8]
	ldur	w8, [x29, #-8]
	add	w8, w8, #200                    ; =200
	stur	w8, [x29, #-8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldur	w9, [x29, #-8]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldur	w0, [x29, #-12]                 ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Jay Ganesh\n"

l_.str.1:                               ; @.str.1
	.asciz	"Value of no is : %d\n"

.subsections_via_symbols
