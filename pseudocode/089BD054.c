/* Entry 0x089BD054 | file offset 0x001BA02C | FUN_089bd054 | bytes 36 */

int FUN_089bd054(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)((uint)*(byte *)(param_1 + 0x17) * (uint)*(byte *)(param_1 + 0x18)) >> 3;
  }
  return iVar1;
}

