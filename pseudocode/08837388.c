/* Entry 0x08837388 | file offset 0x00034360 | FUN_08837388 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c7db4. Boundary still requires runtime validation. */

bool FUN_08837388(int param_1)

{
  return (*(uint *)(param_1 + 900) & 0x40000) != 0;
}

