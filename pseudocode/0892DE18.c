/* Entry 0x0892DE18 | file offset 0x0012ADF0 | FUN_0892de18 | bytes 344 */

void FUN_0892de18(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      FUN_0892df70(param_1);
      iVar1 = *(int *)(param_1 + 0x3c);
      if ((iVar1 != 0) &&
         (pcVar2 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14),
         iVar1 = (*pcVar2)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar2,4,0), iVar1 != 0
         )) {
        if (*(short *)(*(int *)(param_1 + 0x34) + 0xc) == 0) {
          (**(code **)(*(int *)(param_1 + 0x24) + 0x2c))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
        }
        else if (*(short *)(*(int *)(param_1 + 0x34) + 0xc) == 2) {
          FUN_0892ddd0(param_1);
        }
      }
      if (*(short *)(*(int *)(param_1 + 0x34) + 0xc) == 2) {
        if (*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x44)) {
          *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 1.0;
        }
        else {
          FUN_0892ddd0(param_1);
        }
      }
    }
  }
  else if (iVar1 < 3) {
    FUN_0892df70(param_1);
    FUN_0892dfc4(param_1);
  }
  else if (iVar1 < 4) {
    FUN_0892e014(param_1);
  }
  return;
}

