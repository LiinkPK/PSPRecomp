/* Entry 0x088048F0 | file offset 0x000018C8 | FUN_088048f0 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6b5c. Boundary still requires runtime validation. */

bool FUN_088048f0(int param_1)

{
  return (*(uint *)(param_1 + 900) & 0x40000) != 0;
}

