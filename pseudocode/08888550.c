/* Entry 0x08888550 | file offset 0x00085528 | FUN_08888550 | bytes 140 */

void FUN_08888550(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 2);
  return;
}

