/* Entry 0x0885C5B8 | file offset 0x00059590 | FUN_0885c5b8 | bytes 68 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8e4c. Boundary still requires runtime validation. */

void FUN_0885c5b8(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x14);
  uVar2 = 0;
  while (piVar1 != *(int **)(param_1 + 4)) {
    piVar4 = (int *)*piVar1;
    uVar3 = (int)piVar4 - ((int)piVar1 + piVar1[2]);
    piVar1 = piVar4;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  return;
}

