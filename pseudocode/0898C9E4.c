/* Entry 0x0898C9E4 | file offset 0x001899BC | FUN_0898c9e4 | bytes 272 */

undefined4 FUN_0898c9e4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10 [2];
  
  if (*(char *)(param_2 + 0x1f) == '\0') {
    local_10[0] = 2;
    local_10[1] = 1;
    if (*(short *)(param_2 + 0xc) < 0) {
      iVar3 = 0;
    }
    else {
      iVar4 = 0;
      iVar3 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x88) + *(int *)((int)local_10 + iVar3) * 4 + 0x1b8);
        if (iVar3 != 0) {
          iVar5 = *(int *)(iVar3 + 0x40);
          while( true ) {
            if ((uint)*(ushort *)(iVar5 + 6) == (int)*(short *)(param_2 + 0xc)) goto LAB_0898caa4;
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) break;
            iVar5 = *(int *)(iVar3 + 0x40);
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar4 * 4;
      } while (iVar4 < 2);
      iVar3 = 0;
    }
LAB_0898caa4:
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)
               (iVar3 + (uint)*(ushort *)
                               (*(int *)(*(int *)(*(int *)(iVar3 + 0x40) + 0x1c) +
                                        *(short *)(param_2 + 0xe) * 4) + 2) + 0x60);
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar2;
    }
  }
  else {
    uVar1 = FUN_0898caf4(param_1,param_2);
  }
  return uVar1;
}

