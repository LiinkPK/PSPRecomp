/* Entry 0x088DA024 | file offset 0x000D6FFC | FUN_088da024 | bytes 60 */

int FUN_088da024(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(iVar1 + 0x2c)) {
    iVar1 = *(int *)(iVar1 + 0xc) + *(short *)(param_1 + 0xc) * 0x1c;
  }
  else {
    iVar1 = 0;
  }
  return (int)*(short *)(iVar1 + 2);
}

