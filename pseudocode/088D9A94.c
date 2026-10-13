/* Entry 0x088D9A94 | file offset 0x000D6A6C | FUN_088d9a94 | bytes 88 */

void FUN_088d9a94(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(iVar1 + 0x2c)) {
    iVar1 = *(int *)(iVar1 + 0xc) + *(short *)(param_1 + 0xc) * 0x1c;
  }
  else {
    iVar1 = 0;
  }
  FUN_088d9aec((float)(int)*(short *)(iVar1 + 4));
  return;
}

