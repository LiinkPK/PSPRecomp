/* Entry 0x0890BEE4 | file offset 0x00108EBC | FUN_0890bee4 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cdec4. Boundary still requires runtime validation. */

bool FUN_0890bee4(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x134) = 0;
  iVar1 = *(int *)(param_1 + 0x124) + 1;
  *(int *)(param_1 + 0x124) = iVar1;
  return iVar1 == *(int *)(param_1 + 0x128);
}

