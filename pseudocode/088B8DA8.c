/* Entry 0x088B8DA8 | file offset 0x000B5D80 | FUN_088b8da8 | bytes 108 */

void FUN_088b8da8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_088b9004();
  if (iVar1 != 0) {
    param_3 = *(char *)(iVar1 + 2) + param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    else if (99 < param_3) {
      param_3 = 99;
    }
    *(char *)(iVar1 + 2) = (char)param_3;
    *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 8;
  }
  return;
}

