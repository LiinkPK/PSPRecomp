/* Entry 0x08904E18 | file offset 0x00101DF0 | FUN_08904e18 | bytes 268 */

void FUN_08904e18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_089068b8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x2d4) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0885c538(param_2,*(int *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0885c538(param_2,*(int *)(param_1 + 0x24),0);
  }
  FUN_0890534c(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = 0;
  iVar1 = param_1 + 0x34;
  if (0 < *(int *)(param_1 + 500)) {
    do {
      if (*(int *)(iVar1 + 0x14) != 0) {
        FUN_0885c538(param_2,*(int *)(iVar1 + 0x14),0);
        FUN_08905848(iVar1);
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 500));
  }
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}

