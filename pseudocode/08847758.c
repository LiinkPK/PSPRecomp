/* Entry 0x08847758 | file offset 0x00044730 | FUN_08847758 | bytes 172 */

void FUN_08847758(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  FUN_08847320(param_1,param_2,param_3);
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + iVar1 + 0x40) == param_3) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1 + 0x40) == -1) {
      *(char *)(param_1 + iVar1 + 0x40) = (char)param_3;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

