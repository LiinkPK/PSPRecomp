/* Entry 0x088E2B8C | file offset 0x000DFB64 | FUN_088e2b8c | bytes 112 */

void FUN_088e2b8c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      FUN_0885c538(param_2,*(undefined4 *)(iVar1 + 8),0);
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x5c));
  }
  return;
}

