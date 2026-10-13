/* Entry 0x088148FC | file offset 0x000118D4 | FUN_088148fc | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c716c. Boundary still requires runtime validation. */

bool FUN_088148fc(int param_1)

{
  return (*(uint *)(param_1 + 900) & 0x40000) != 0;
}

