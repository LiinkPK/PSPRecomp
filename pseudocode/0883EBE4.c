/* Entry 0x0883EBE4 | file offset 0x0003BBBC | FUN_0883ebe4 | bytes 96 */

void FUN_0883ebe4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_088a5208(*(int *)(param_1 + 0x20));
    iVar2 = FUN_088a54b0(DAT_089d6d78,param_1,uVar1,*(undefined4 *)(param_1 + 0x24),0);
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 != 0) {
      FUN_088a9a80();
    }
  }
  return;
}

