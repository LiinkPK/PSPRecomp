/* Entry 0x089330B8 | file offset 0x00130090 | FUN_089330b8 | bytes 100 */

void FUN_089330b8(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_088d9b28(*(int *)(param_1 + 0x34),param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

