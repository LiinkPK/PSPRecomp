/* Entry 0x0884F010 | file offset 0x0004BFE8 | FUN_0884f010 | bytes 284 */

void FUN_0884f010(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x12);
  if (4 < iVar1 - 1U) {
    return;
  }
  if (iVar1 != 3) {
    if ((iVar1 == 4) || (iVar1 == 5)) goto LAB_0884f10c;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    iVar1 = *(int *)(param_1 + 8);
    *(uint *)(iVar1 + 0x38c) = *(uint *)(iVar1 + 0x38c) | 0x4000;
    *(undefined4 *)(iVar1 + 0x388) = *(undefined4 *)(iVar1 + 0x388);
    *(undefined2 *)(param_1 + 0x12) = 3;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_08834df4(*(undefined4 *)(param_1 + 8));
  func_0x08ad0af8(*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x390) + 0x5c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    FUN_088a9d7c(iVar1,*(int *)(param_1 + 8) + 0x4c8);
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5d4) + 0x390) + 0x5c);
  if (iVar1 != 0) {
    FUN_088a9d7c(iVar1,*(int *)(param_1 + 8) + 0x4c8);
  }
  iVar1 = FUN_08839314(*(undefined4 *)(param_1 + 8),0);
  if (iVar1 == 0) {
    return;
  }
LAB_0884f10c:
  FUN_0884ef7c(param_1);
  return;
}

