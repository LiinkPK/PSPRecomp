/* Entry 0x08804488 | file offset 0x00001460 | FUN_08804488 | bytes 16 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6a14. Boundary still requires runtime validation. */

bool FUN_08804488(int param_1)

{
  return (*(uint *)(param_1 + 4) & 0x80) != 0;
}

