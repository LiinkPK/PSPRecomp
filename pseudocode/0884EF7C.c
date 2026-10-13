/* Entry 0x0884EF7C | file offset 0x0004BF54 | FUN_0884ef7c | bytes 148 */

void FUN_0884ef7c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x390) + 0x5c);
  if (iVar1 != 0) {
    FUN_088a9d7c(iVar1,iVar2 + 0x4c8);
    iVar2 = *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5d4) + 0x390) + 0x5c);
  if (iVar1 != 0) {
    FUN_088a9d7c(iVar1,iVar2 + 0x4c8);
    iVar2 = *(int *)(param_1 + 8);
  }
  func_0x08ad0af8(iVar2);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x544);
  (**(code **)(iVar1 + 0xfc))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0xf8));
  FUN_0884ecd4(param_1);
  return;
}

