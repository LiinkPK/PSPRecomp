/* Entry 0x0887E718 | file offset 0x0007B6F0 | FUN_0887e718 | bytes 52 */

bool FUN_0887e718(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
  iVar1 = (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x18));
  return iVar1 != 0;
}

