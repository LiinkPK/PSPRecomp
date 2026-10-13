/* Entry 0x088375D4 | file offset 0x000345AC | FUN_088375d4 | bytes 120 */

undefined4 FUN_088375d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((*(uint *)(param_1 + 0x388) & 0x1000) != 0) && ((*(byte *)(param_1 + 0x192) & 2) == 0)) &&
      (*(int *)(param_1 + 0x468) != 0)) && (0 < *(short *)(*(int *)(param_1 + 0x468) + 4))) {
    uVar1 = 1;
  }
  return uVar1;
}

