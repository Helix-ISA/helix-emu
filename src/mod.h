#ifndef MOD_H
#define MOD_H

/* operand_mod */
#define OPERAND_64_BIT 0x00
#define OPERAND_32_BIT 0x01
#define OPERAND_16_BIT 0x02
#define OPERAND_8_BIT  0x03

/* mov_mod */
#define MOV_REGTOREG 0x00
#define MOV_REGTOMEM 0x01
#define MOV_MEMTOREG 0x02
#define MOV_IMMTOREG 0x03

/* imm_mod */
#define IMM_TYPE_UNSIGNED 0x00
#define IMM_TYPE_SIGNED   0x01

#endif
