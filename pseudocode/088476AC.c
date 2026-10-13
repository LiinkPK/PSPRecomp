/* Entry 0x088476AC | file offset 0x00044684 | FUN_088476ac | bytes 172 */

void FUN_088476ac(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  FUN_08847280(param_1,param_2,param_3);
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + iVar1 + 0x20) == param_3) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1 + 0x20) == -1) {
      *(char *)(param_1 + iVar1 + 0x20) = (char)param_3;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

