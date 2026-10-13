/* Entry 0x089A7E30 | file offset 0x001A4E08 | FUN_089a7e30 | bytes 100 */

int FUN_089a7e30(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0xc;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 0x58;
    uVar2 = param_2 & 0x10;
    if (((param_2 & 1) != 0) && (iVar1 = 0xd4, uVar2 != 0)) {
      iVar1 = *(int *)(param_1 + 0x34) * 0x10 + 0xf4;
    }
    if ((param_2 & 2) != 0) {
      if (uVar2 == 0) {
        return iVar1 + 100;
      }
      iVar1 = iVar1 + 0x84 + *(int *)(param_1 + 0x34) * 0x10;
    }
    if (uVar2 != 0) {
      iVar1 = iVar1 + 0x18;
    }
  }
  return iVar1;
}

