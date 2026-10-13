/* Entry 0x0892CD08 | file offset 0x00129CE0 | FUN_0892cd08 | bytes 144 */

void FUN_0892cd08(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892acac(param_1);
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  do {
    FUN_0892c8f0(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
  } while (iVar2 < 2);
  FUN_0892cff8(param_1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  return;
}

