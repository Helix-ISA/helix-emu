#ifndef OPCODE_H
#define OPCODE_H

#define OP_NOP 		0x01
#define OP_HLT 		0x02
#define OP_SYSCALL	0x03
#define OP_TRAP 	0x04
#define OP_IRET 	0x05
#define OP_EI 		0x06
#define OP_DI 		0x07
#define RET 		0x08

#define OP_AND		0x10
#define OP_ANDI		0x11
#define OP_OR		0x12
#define OP_ORI		0x13
#define OP_XOR		0x14
#define OP_XORI		0x15
#define OP_ADD		0x16
#define OP_ADDI		0x17
#define OP_SUB		0x18
#define OP_SUBI		0x19
#define OP_MOV		0x1A
#define OP_CMP		0x1B
#define OP_MASK		0x1C
#define OP_NOT		0x1D
#define OP_MOV_C16	0x1E

#define OP_AND_FOV	0x20
#define OP_ANDI_FOV	0x21
#define OP_OR_FOV	0x22
#define OP_ORI_FOV	0x23
#define OP_XOR_FOV	0x24
#define OP_XORI_FOV	0x25
#define OP_ADD_FOV	0x26
#define OP_ADDI_FOV	0x27
#define OP_SUB_FOV	0x28
#define OP_SUBI_FOV	0x29
#define OP_MOV_FOV	0x2A
#define OP_CMP_FOV	0x2B
#define OP_MASK_FOV	0x2C

#define OP_JMP 		0x30
#define OP_LJMP 	0x31
#define OP_BEQ		0x32
#define OP_BNE	 	0x33
#define OP_BLT	 	0x34
#define OP_BGE		0x35
#define OP_BLTU 	0x36
#define OP_BGEU 	0x37
#define OP_CALL 	0x37
#define OP_LCALL 	0x37

#define OP_SHL 		0x40
#define OP_SHLI 	0x41
#define OP_SHR		0x42
#define OP_SHRI	 	0x43
#define OP_SAR	 	0x44
#define OP_SARI		0x45

#define OP_LEA		0x50
#define OP_MOV_FOVO	0x51

#endif
