/* Entry 0x0884EEF4 | file offset 0x0004BECC | FUN_0884eef4 | bytes 136 */

void FUN_0884eef4(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x12) = 2;
  if (param_2 != '\0') {
    FUN_08834df4(0,*(undefined4 *)(param_1 + 8));
    func_0x08ad0af8(*(undefined4 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(*(int *)(iVar2 + 0x390) + 0x5c);
    if (iVar1 != 0) {
      FUN_088a9d7c(iVar1,iVar2 + 0x4c8);
      iVar2 = *(int *)(param_1 + 8);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5d4) + 0x390) + 0x5c);
    if (iVar1 != 0) {
      FUN_088a9d7c(iVar1,iVar2 + 0x4c8);
    }
  }
  return;
}

