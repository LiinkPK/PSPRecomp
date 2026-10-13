/* Entry 0x08908B58 | file offset 0x00105B30 | FUN_08908b58 | bytes 224 */

void FUN_08908b58(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0885c538(*(undefined4 *)(param_1 + 0x260),*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0885c538(*(undefined4 *)(param_1 + 0x260),*(int *)(param_1 + 0x2c),0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x40);
  iVar1 = param_1 + 0x38;
  do {
    if (*piVar2 != 0) {
      FUN_0885c538(*(undefined4 *)(param_1 + 0x260),*piVar2,0);
    }
    FUN_08905848(iVar1);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + 0x20;
  } while (iVar3 < 0x10);
  sceNetAdhocctlDelHandler(*(undefined4 *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  return;
}

