/* Entry 0x08930C9C | file offset 0x0012DC74 | FUN_08930c9c | bytes 136 */

void FUN_08930c9c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892acac(param_1);
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  do {
    FUN_089303b0(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x5c;
  } while (iVar2 < 6);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  return;
}

