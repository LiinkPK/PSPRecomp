/* Entry 0x088C7600 | file offset 0x000C45D8 | FUN_088c7600 | bytes 116 */

uint FUN_088c7600(short *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc30);
  if (iVar4 < 0x14) {
    iVar3 = 0;
    uVar2 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 | 1 << ((int)*param_1 & 0x1fU);
        param_1 = param_1 + 0x9c;
      } while (iVar3 < iVar4);
    }
    uVar1 = 0;
    do {
      if ((uVar2 & 1 << (uVar1 & 0x1f)) == 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x14);
  }
  return 0xffffffff;
}

