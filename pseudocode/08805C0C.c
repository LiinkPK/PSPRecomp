/* Entry 0x08805C0C | file offset 0x00002BE4 | FUN_08805c0c | bytes 96 */

void FUN_08805c0c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 = FUN_08842048(iVar1), iVar1 != 0) {
    *(uint *)(iVar1 + 0x580) = *(uint *)(iVar1 + 0x580) & 0xfffffeff;
  }
  *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) | 0x100;
  return;
}

