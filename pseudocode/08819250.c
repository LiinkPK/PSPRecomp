/* Entry 0x08819250 | file offset 0x00016228 | FUN_08819250 | bytes 68 */

undefined4 FUN_08819250(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_08815ce8();
  }
  return uVar1;
}

