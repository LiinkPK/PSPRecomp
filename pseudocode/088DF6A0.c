/* Entry 0x088DF6A0 | file offset 0x000DC678 | FUN_088df6a0 | bytes 324 */

undefined4 FUN_088df6a0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [4];
  
  iVar2 = FUN_088df7e4();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(short *)(iVar2 + 0xc) == 3) && ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
    FUN_088df590(param_1);
    if (*(int *)(param_1 + 8) == 0) {
      return 0;
    }
    FUN_088da060(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  iVar2 = FUN_0887a4c4(param_1 + 0xc);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  sVar1 = *(short *)(iVar3 + 0xc);
  if (sVar1 < 2) {
    if (0 < sVar1) {
      FUN_088da0a8(iVar3,2,auStack_50,auStack_10);
      goto LAB_088df7b4;
    }
  }
  else if (sVar1 < 3) {
    FUN_088da0a8(iVar3,2,auStack_50,auStack_10);
    goto LAB_088df7b4;
  }
  FUN_088da0a8(iVar3,2,auStack_50,auStack_10);
LAB_088df7b4:
  FUN_0887b778(iVar2,auStack_50);
  FUN_0887b828(iVar2,auStack_10);
  return 0;
}

