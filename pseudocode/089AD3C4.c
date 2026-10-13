/* Entry 0x089AD3C4 | file offset 0x001AA39C | FUN_089ad3c4 | bytes 92 */

undefined4 FUN_089ad3c4(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  
  if ((param_3 & 0xffffd) == 0) {
    if (((param_3 & 2) == 0) || (iVar2 = 0, param_2 < 1)) {
      return 0;
    }
    sVar1 = *(short *)(param_1 + 0x28);
    while ((iVar2 = iVar2 + 1, sVar1 == 0 && ((*(ushort *)(param_1 + 2) & 0x700) == 0))) {
      if (param_2 == iVar2) {
        return 0;
      }
      sVar1 = *(short *)(param_1 + 0xf8);
      param_1 = param_1 + 0xd0;
    }
  }
  return 1;
}

