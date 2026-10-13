/* Entry 0x088C1998 | file offset 0x000BE970 | FUN_088c1998 | bytes 196 */

uint FUN_088c1998(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(uint *)(*param_1 + 0x18);
  }
  if (param_1[1] != 0) {
    uVar6 = 0;
    uVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = FUN_088c7e98((int)*(short *)(param_1[1] + 0x30 + iVar3));
      if (iVar1 != 0) {
        uVar6 = uVar6 | *(uint *)(iVar1 + 0x20);
        uVar5 = uVar5 | *(uint *)(iVar1 + 0x1c);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 2;
    } while (iVar4 < 2);
    uVar2 = uVar2 & ~uVar6 | uVar5;
  }
  return uVar2;
}

