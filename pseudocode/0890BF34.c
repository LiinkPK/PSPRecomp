/* Entry 0x0890BF34 | file offset 0x00108F0C | FUN_0890bf34 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cdee4. Boundary still requires runtime validation. */

bool FUN_0890bf34(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x120) = 1;
  iVar1 = *(int *)(param_1 + 0x110) + 1;
  *(int *)(param_1 + 0x110) = iVar1;
  return iVar1 == *(int *)(param_1 + 0x114);
}

