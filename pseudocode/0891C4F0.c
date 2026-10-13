/* Entry 0x0891C4F0 | file offset 0x001194C8 | FUN_0891c4f0 | bytes 108 */

void FUN_0891c4f0(int param_1)

{
  int iVar1;
  
  *(char *)(param_1 + 0x2a1e) = *(char *)(param_1 + 0x2a1e) + '\x01';
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2a1e) < 4) {
    iVar1 = FUN_0891c124(param_1,(int)*(char *)(param_1 + 0x2a1e));
  }
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2a44) = *(uint *)(param_1 + 0x2a44) | 2;
    FUN_08889808(DAT_089d6a10);
  }
  return;
}

