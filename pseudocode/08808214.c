/* Entry 0x08808214 | file offset 0x000051EC | FUN_08808214 | bytes 88 */

void FUN_08808214(int param_1)

{
  int iVar1;
  
  if ((DAT_08b63280 != '\0') && (iVar1 = FUN_088082cc(param_1), iVar1 != 0)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
  }
  return;
}

