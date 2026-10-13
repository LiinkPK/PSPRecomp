/* Entry 0x08813510 | file offset 0x000104E8 | FUN_08813510 | bytes 100 */

int FUN_08813510(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x542) == '\x03') {
    param_1 = *(int *)(param_1 + 0x5d4);
  }
  if (*(char *)(param_1 + 0x542) == '\x01') {
    param_1 = *(int *)(param_1 + 0x1108);
  }
  iVar1 = 0;
  if ((*(uint *)(param_1 + 900) & 0x800000) == 0) {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x52c) + 0x14);
  }
  return iVar1;
}

