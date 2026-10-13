/* Entry 0x089703C8 | file offset 0x0016D3A0 | FUN_089703c8 | bytes 96 */

int FUN_089703c8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    if (((*(byte *)(param_1 + 8) != 0) && (*(byte *)(param_1 + 8) < 2)) &&
       ((*(ushort *)(*(int *)(param_1 + 0x14) + 2) & 0x20) != 0)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

