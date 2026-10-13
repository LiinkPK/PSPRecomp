/* Entry 0x08989E9C | file offset 0x00186E74 | FUN_08989e9c | bytes 288 */

undefined4 FUN_08989e9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10 [4];
  
  piVar2 = local_10;
  local_10[0] = 2;
  local_10[1] = 1;
  if (-1 < *(short *)(param_2 + 0x8a)) {
    iVar3 = 0;
    do {
      iVar5 = *(int *)(*(int *)(DAT_09b6f478 + 0x88) + *piVar2 * 4 + 0x1b8);
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 0x40);
        while( true ) {
          if ((uint)*(ushort *)(iVar6 + 6) == (int)*(short *)(param_2 + 0x8a)) goto LAB_08989f2c;
          iVar5 = *(int *)(iVar5 + 0x14);
          if (iVar5 == 0) break;
          iVar6 = *(int *)(iVar5 + 0x40);
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 2);
  }
  iVar5 = 0;
LAB_08989f2c:
  if (iVar5 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(iVar5 + (uint)*(ushort *)
                                    (*(int *)(*(int *)(*(int *)(iVar5 + 0x40) + 0x1c) +
                                             *(short *)(param_2 + 0x8c) * 4) + 2) + 0x60);
  }
  piVar4 = (int *)(param_1 + 0x24);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar3 = *piVar2;
    iVar5 = *piVar4;
    *piVar4 = iVar5 + 1;
    *(int *)(param_1 + iVar5 * 4 + 4) = iVar3;
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 != 0) {
      iVar5 = *piVar4;
      while( true ) {
        *piVar4 = iVar5 + 1;
        *(int *)(param_1 + iVar5 * 4 + 4) = iVar3;
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) break;
        iVar5 = *piVar4;
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}

