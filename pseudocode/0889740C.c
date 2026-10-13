/* Entry 0x0889740C | file offset 0x000943E4 | FUN_0889740c | bytes 84 */

undefined4 FUN_0889740c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x104) == '\x01') {
    uVar1 = 0;
  }
  else if (*(int *)(DAT_089d6ac8 + 0x4d0) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

