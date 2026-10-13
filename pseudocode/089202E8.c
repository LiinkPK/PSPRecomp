/* Entry 0x089202E8 | file offset 0x0011D2C0 | FUN_089202e8 | bytes 180 */

void FUN_089202e8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 - *(int *)(param_1 + 0x9c);
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (99999999 < param_2) {
    param_2 = 99999999;
  }
  *(int *)(param_1 + 0x9c) = param_2;
  if (0 < (int)uVar3) {
    iVar1 = *(int *)(param_1 + 0xa0) + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (99999999 < iVar1) {
      iVar1 = 99999999;
    }
    *(int *)(param_1 + 0xa0) = iVar1;
    uVar2 = (uint)*(ushort *)(param_1 + 0xa4);
    if (((int)uVar2 <= (int)uVar3) && (uVar2 = uVar3, 99999999 < (int)uVar3)) {
      uVar2 = 99999999;
    }
    *(short *)(param_1 + 0xa4) = (short)uVar2;
  }
  return;
}

