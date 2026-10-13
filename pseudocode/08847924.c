/* Entry 0x08847924 | file offset 0x000448FC | FUN_08847924 | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8a2c. Boundary still requires runtime validation. */

int FUN_08847924(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x52c);
  iVar1 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

