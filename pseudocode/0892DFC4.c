/* Entry 0x0892DFC4 | file offset 0x0012AF9C | FUN_0892dfc4 | bytes 80 */

void FUN_0892dfc4(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x24) + 0x4c))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x48));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 3;
  }
  return;
}

