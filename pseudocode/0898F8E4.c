/* Entry 0x0898F8E4 | file offset 0x0018C8BC | FUN_0898f8e4 | bytes 148 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd31c. Boundary still requires runtime validation. */

void FUN_0898f8e4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_2 + (uint)*(ushort *)
                                    (*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x1c) +
                                             *(int *)(param_1 + 8) * 4) + 2) + 0x60);
  if (piVar1 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = *piVar1;
    piVar1 = (int *)(iVar3 + 0x20);
    iVar4 = *piVar1;
    *piVar1 = iVar4 + 1;
    *(int *)(iVar3 + iVar4 * 4) = iVar2;
    iVar3 = *(int *)(iVar2 + 0x14);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 4);
      while( true ) {
        iVar5 = *(int *)(iVar4 + 0x20);
        *(int *)(iVar4 + 0x20) = iVar5 + 1;
        *(int *)(iVar4 + iVar5 * 4) = iVar2;
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) break;
        iVar4 = *(int *)(param_1 + 4);
      }
    }
  }
  return;
}

