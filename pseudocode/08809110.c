/* Entry 0x08809110 | file offset 0x000060E8 | FUN_08809110 | bytes 132 */

undefined4 FUN_08809110(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  if (iVar1 == param_2) {
    return 1;
  }
  if (*(char *)(param_2 + 0x542) == '\x03') {
    if (iVar1 == *(int *)(param_2 + 0x5d4)) {
      return 1;
    }
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x542) == '\x03')) &&
       (*(int *)(iVar1 + 0x5d4) == *(int *)(param_2 + 0x5d4))) {
      return 1;
    }
  }
  return 0;
}

