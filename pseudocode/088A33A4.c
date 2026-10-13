/* Entry 0x088A33A4 | file offset 0x000A037C | FUN_088a33a4 | bytes 12 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cad2c. Boundary still requires runtime validation. */

uint FUN_088a33a4(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 1;
}

