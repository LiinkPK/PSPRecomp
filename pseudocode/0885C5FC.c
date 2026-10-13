/* Entry 0x0885C5FC | file offset 0x000595D4 | FUN_0885c5fc | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8e54. Boundary still requires runtime validation. */

int FUN_0885c5fc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = (int *)(param_1 + 0x14); piVar2 != (int *)*(int *)(param_1 + 4);
      piVar2 = (int *)*piVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

