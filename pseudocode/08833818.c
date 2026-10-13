/* Entry 0x08833818 | file offset 0x000307F0 | FUN_08833818 | bytes 128 */

void FUN_08833818(float param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_08837c44();
  if (iVar1 == 0) {
    FUN_08837a5c(param_2);
    iVar1 = *(int *)(param_2 + 0x3a4);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x3a4);
  }
  (**(code **)(*(int *)(iVar1 + 8) + 0x44))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0x40),param_2);
  (**(code **)(*(int *)(param_2 + 0x544) + 0x1dc))
            (param_1 - *(float *)(param_2 + 0x84),
             param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x1d8));
  return;
}

