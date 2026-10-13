/* Entry 0x08900F50 | file offset 0x000FDF28 | FUN_08900f50 | bytes 292 */

bool FUN_08900f50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_08900d84(param_1);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(iVar1 + 0xc) + 9) < '\0') {
      return true;
    }
    uVar4 = 0xffffffff;
    if (*(int *)(param_1 + 8) < 0) {
      iVar3 = FUN_088cb164(DAT_089d712c + 0xf58,param_2);
      uVar4 = (uint)*(byte *)(iVar3 + *(char *)(iVar3 + 0x773) * 0xc6 + 0xd5);
      if (uVar4 == 0) {
        uVar4 = (uint)*(byte *)(iVar3 + 1);
      }
    }
    else {
      uVar2 = FUN_08900da0(param_1);
      iVar3 = FUN_088b3360(uVar2,param_2);
      if ((iVar3 != 0) && (iVar3 = FUN_088bbd8c((int)*(short *)(iVar3 + 2)), iVar3 != 0)) {
        uVar4 = (uint)*(byte *)(iVar3 + 5);
      }
    }
    if (uVar4 != 0xffffffff) {
      return (int)uVar4 <= (int)*(char *)(*(int *)(iVar1 + 0xc) + 9);
    }
  }
  return false;
}

