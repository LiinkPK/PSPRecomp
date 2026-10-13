/* Entry 0x088281E0 | file offset 0x000251B8 | FUN_088281e0 | bytes 104 */

void FUN_088281e0(int param_1)

{
  undefined4 uVar1;
  
  FUN_08833404();
  if (*(float *)(param_1 + 0x3b4) == 0.0) {
    if (*(float *)(*(int *)(param_1 + 0x550) + 0x3b0) < 1.0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x550) + 0x3b0);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x3b0);
    }
    *(undefined4 *)(param_1 + 0x370) = uVar1;
  }
  return;
}

