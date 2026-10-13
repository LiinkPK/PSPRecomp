/* Entry 0x088A1E44 | file offset 0x0009EE1C | FUN_088a1e44 | bytes 232 */

void FUN_088a1e44(float param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0.0) {
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        *(undefined4 *)(param_2 + 0x30) = 2;
      }
    }
    else if (iVar1 < 2) {
      iVar1 = **(int **)(param_2 + 0x50);
      (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_2 + 0x50) + (int)*(short *)(iVar1 + 0x18));
    }
    *(undefined4 *)(param_2 + 0x54) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        *(undefined4 *)(param_2 + 0x30) = 2;
      }
    }
    else if (iVar1 < 2) {
      FUN_088a1f2c(0,param_1,param_2);
      *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 0x100;
    }
  }
  return;
}

