	.file	"main.c"
	.text
Ltext0:
	.def	_printf;	.scl	3;	.type	32;	.endef
_printf:
LFB1:
	.file 1 "c:/mingw/include/stdio.h"
	.loc 1 414 0
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	.loc 1 416 0
	leal	12(%ebp), %eax
	movl	%eax, -12(%ebp)
	.loc 1 417 0
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	___mingw_vprintf
	movl	%eax, %ebx
	.loc 1 419 0
	movl	%ebx, %eax
	.loc 1 420 0
	addl	$36, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1:
	.globl	_strlen
	.def	_strlen;	.scl	2;	.type	32;	.endef
_strlen:
LFB10:
	.file 2 "d:/OneDrive/Nastava/Knjiga/Primjeri/main.c"
	.loc 2 3 0
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	.loc 2 4 0
	movl	$0, -4(%ebp)
	.loc 2 5 0
	jmp	L4
L5:
	.loc 2 5 0 is_stmt 0 discriminator 2
	addl	$1, -4(%ebp)
	addl	$1, 8(%ebp)
L4:
	.loc 2 5 0 discriminator 1
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	L5
	.loc 2 6 0 is_stmt 1
	movl	-4(%ebp), %eax
	.loc 2 7 0
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.loc 2 9 0
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	andl	$-16, %esp
	subl	$144, %esp
	.cfi_offset 7, -12
	.loc 2 9 0
	call	___main
LVL0:
	.loc 2 10 0
	movl	$1870035529, 16(%esp)
	movl	$543780466, 20(%esp)
	movl	$8022382, 24(%esp)
	leal	28(%esp), %edx
	movl	$0, %eax
	movl	$29, %ecx
	movl	%edx, %edi
	rep stosl
	.loc 2 11 0
	leal	16(%esp), %eax
	movl	%eax, (%esp)
	call	_strlen
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	.loc 2 12 0
	movl	-4(%ebp), %edi
	leave
	.cfi_restore 5
	.cfi_restore 7
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
Letext0:
	.file 3 "c:/mingw/lib/gcc/mingw32/6.3.0/include/stddef.h"
	.section	.debug_info,"dr"
Ldebug_info0:
	.long	0x271
	.word	0x4
	.secrel32	Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.ascii "GNU C11 6.3.0 -mtune=generic -march=i586 -g -std=c11\0"
	.byte	0xc
	.ascii "d:\\OneDrive\\Nastava\\Knjiga\\Primjeri\\main.c\0"
	.long	Ltext0
	.long	Letext0-Ltext0
	.secrel32	Ldebug_line0
	.uleb128 0x2
	.ascii "size_t\0"
	.byte	0x3
	.byte	0xd8
	.long	0x87
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "unsigned int\0"
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.ascii "short unsigned int\0"
	.uleb128 0x4
	.byte	0x4
	.ascii "__builtin_va_list\0"
	.long	0xc5
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.ascii "char\0"
	.uleb128 0x5
	.long	0xc5
	.uleb128 0x6
	.ascii "_iobuf\0"
	.byte	0x20
	.byte	0x1
	.byte	0xd2
	.long	0x159
	.uleb128 0x7
	.ascii "_ptr\0"
	.byte	0x1
	.byte	0xd4
	.long	0x159
	.byte	0
	.uleb128 0x7
	.ascii "_cnt\0"
	.byte	0x1
	.byte	0xd5
	.long	0x15f
	.byte	0x4
	.uleb128 0x7
	.ascii "_base\0"
	.byte	0x1
	.byte	0xd6
	.long	0x159
	.byte	0x8
	.uleb128 0x7
	.ascii "_flag\0"
	.byte	0x1
	.byte	0xd7
	.long	0x15f
	.byte	0xc
	.uleb128 0x7
	.ascii "_file\0"
	.byte	0x1
	.byte	0xd8
	.long	0x15f
	.byte	0x10
	.uleb128 0x7
	.ascii "_charbuf\0"
	.byte	0x1
	.byte	0xd9
	.long	0x15f
	.byte	0x14
	.uleb128 0x7
	.ascii "_bufsiz\0"
	.byte	0x1
	.byte	0xda
	.long	0x15f
	.byte	0x18
	.uleb128 0x7
	.ascii "_tmpfname\0"
	.byte	0x1
	.byte	0xdb
	.long	0x159
	.byte	0x1c
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.long	0xc5
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii "int\0"
	.uleb128 0x2
	.ascii "FILE\0"
	.byte	0x1
	.byte	0xdc
	.long	0xd2
	.uleb128 0x9
	.long	0x166
	.long	0x17d
	.uleb128 0xa
	.byte	0
	.uleb128 0xb
	.ascii "_iob\0"
	.byte	0x1
	.byte	0xef
	.long	0x172
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.ascii "long long int\0"
	.uleb128 0xc
	.ascii "main\0"
	.byte	0x2
	.byte	0x9
	.long	0x15f
	.long	LFB11
	.long	LFE11-LFB11
	.uleb128 0x1
	.byte	0x9c
	.long	0x1c3
	.uleb128 0xd
	.ascii "src\0"
	.byte	0x2
	.byte	0xa
	.long	0x1c3
	.uleb128 0x2
	.byte	0x74
	.sleb128 16
	.byte	0
	.uleb128 0x9
	.long	0xc5
	.long	0x1d3
	.uleb128 0xe
	.long	0x1d3
	.byte	0x7f
	.byte	0
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "sizetype\0"
	.uleb128 0xf
	.ascii "strlen\0"
	.byte	0x2
	.byte	0x3
	.long	0x79
	.long	LFB10
	.long	LFE10-LFB10
	.uleb128 0x1
	.byte	0x9c
	.long	0x214
	.uleb128 0x10
	.ascii "s\0"
	.byte	0x2
	.byte	0x3
	.long	0x214
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0xd
	.ascii "r\0"
	.byte	0x2
	.byte	0x4
	.long	0x79
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.long	0xcd
	.uleb128 0x11
	.ascii "printf\0"
	.byte	0x1
	.word	0x19d
	.long	0x15f
	.long	LFB1
	.long	LFE1-LFB1
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x12
	.ascii "__format\0"
	.byte	0x1
	.word	0x19d
	.long	0x214
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x13
	.uleb128 0x14
	.ascii "__retval\0"
	.byte	0x1
	.word	0x19f
	.long	0x15f
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x14
	.ascii "__local_argv\0"
	.byte	0x1
	.word	0x1a0
	.long	0xad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.section	.debug_abbrev,"dr"
Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"dr"
	.long	0x1c
	.word	0x2
	.secrel32	Ldebug_info0
	.byte	0x4
	.byte	0
	.word	0
	.word	0
	.long	Ltext0
	.long	Letext0-Ltext0
	.long	0
	.long	0
	.section	.debug_line,"dr"
Ldebug_line0:
	.section	.debug_str,"dr"
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	___mingw_vprintf;	.scl	2;	.type	32;	.endef
