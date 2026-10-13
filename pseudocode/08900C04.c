/* Entry 0x08900C04 | file offset 0x000FDBDC | FUN_08900c04 | bytes 140 */

void FUN_08900c04(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088b37c0(param_2);
  if (iVar1 != 0) {
    *param_1 = param_2;
    iVar2 = -1;
    param_1[1] = (int)*(short *)(iVar1 + 0x16 + param_3 * 2);
    if (-1 < param_4) {
      iVar2 = (int)*(short *)(iVar1 + 0x10 + param_4 * 2);
    }
    param_1[2] = iVar2;
  }
  return;
}

