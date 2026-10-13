/* Entry 0x08922DB0 | file offset 0x0011FD88 | FUN_08922db0 | bytes 160 */

void FUN_08922db0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_08922c54();
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar2 + 0xc0) != 0) {
    FUN_088a6c70(*(int *)(iVar2 + 0xc0));
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    FUN_088a6c70(*(int *)(iVar2 + 0xc4));
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar2 + 200) != 0) {
    FUN_088a6c70(*(int *)(iVar2 + 200));
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar2 + 0xcc) != 0) {
    FUN_088a6c70();
  }
  uVar1 = func_0x08b42b40();
  FUN_0885c538(uVar1,*(undefined4 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

