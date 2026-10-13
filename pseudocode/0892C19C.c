/* Entry 0x0892C19C | file offset 0x00129174 | FUN_0892c19c | bytes 260 */

void FUN_0892c19c(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  FUN_088d688c(param_1 + 0x1a4,0);
  if (iVar2 == *(int *)(param_1 + 0x1a8)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + 0x34);
    pcVar1 = *(code **)(iVar2 + 0x14);
    iVar2 = (*pcVar1)(*(int *)(param_1 + 0x19c) + (int)*(short *)(iVar2 + 0x10),pcVar1,8,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + 0x34);
      pcVar1 = *(code **)(iVar2 + 0x14);
      iVar2 = (*pcVar1)(*(int *)(param_1 + 0x19c) + (int)*(short *)(iVar2 + 0x10),pcVar1,4,0);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = 3;
    }
  }
  else {
    FUN_0892b590(param_1 + iVar2 * 0x44 + 0x44);
    FUN_0892b544(param_1 + *(int *)(param_1 + 0x1a8) * 0x44 + 0x44);
    *(undefined4 *)(param_1 + 0x1a0) = 1;
  }
  return;
}

