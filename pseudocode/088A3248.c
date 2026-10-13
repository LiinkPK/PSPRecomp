/* Entry 0x088A3248 | file offset 0x000A0220 | FUN_088a3248 | bytes 12 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cacd4. Boundary still requires runtime validation. */

uint FUN_088a3248(int param_1)

{
  return *(uint *)(param_1 + 0x10) & 1;
}

