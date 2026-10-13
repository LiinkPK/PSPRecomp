/* Entry 0x088B7F58 | file offset 0x000B4F30 | FUN_088b7f58 | bytes 224 */

undefined4 FUN_088b7f58(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = FUN_088b1d9c(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_088b8414(param_1,param_2,1);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(ushort *)(iVar2 + 4) & 2) == 0) {
      param_3 = *(short *)(iVar2 + 2) + param_3;
      sVar3 = *(short *)(iVar1 + 0x12);
      if (param_3 < sVar3) {
        sVar3 = (short)param_3;
      }
      *(short *)(iVar2 + 2) = sVar3;
      if (*(short *)(iVar2 + 2) == *(short *)(iVar1 + 0x12)) {
        *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) | 2;
        return 1;
      }
    }
  }
  return 0;
}

