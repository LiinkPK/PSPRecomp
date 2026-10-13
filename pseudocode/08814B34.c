/* Entry 0x08814B34 | file offset 0x00011B0C | FUN_08814b34 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c7384. Boundary still requires runtime validation. */

bool FUN_08814b34(int param_1)

{
  return (*(uint *)(param_1 + 900) & 0x40000) != 0;
}

