/* Entry 0x08850F44 | file offset 0x0004DF1C | FUN_08850f44 | bytes 104 */

void FUN_08850f44(int param_1)

{
  undefined4 uVar1;
  
  FUN_08833404();
  if (*(float *)(param_1 + 0x3b4) == 0.0) {
    if (*(float *)(*(int *)(param_1 + 0x5d4) + 0x3b0) < 1.0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x5d4) + 0x3b0);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x3b0);
    }
    *(undefined4 *)(param_1 + 0x370) = uVar1;
  }
  return;
}

