/* Entry 0x08912A6C | file offset 0x0010FA44 | FUN_08912a6c | bytes 108 */

void FUN_08912a6c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_08912a04(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x264);
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xfffffffb;
  return;
}

