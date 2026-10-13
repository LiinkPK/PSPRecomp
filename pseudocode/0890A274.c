/* Entry 0x0890A274 | file offset 0x0010724C | FUN_0890a274 | bytes 228 */

void FUN_0890a274(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_08935490(param_1 + 0x139f8,param_2,6);
  if (iVar1 == 0) {
    FUN_08903dc8(param_1 + 4,param_2);
    if (*(int *)(param_1 + 0x14c64) != 0) {
      iVar1 = *(int *)(param_1 + 400);
      if (iVar1 < 5) {
        if (3 < iVar1) {
          iVar1 = **(int **)(param_1 + 0x14c64);
          (**(code **)(iVar1 + 0x2c))
                    ((int)*(int **)(param_1 + 0x14c64) + (int)*(short *)(iVar1 + 0x28));
        }
      }
      else if (iVar1 < 6) {
        iVar1 = **(int **)(param_1 + 0x14c64);
        (**(code **)(iVar1 + 0x34))
                  ((int)*(int **)(param_1 + 0x14c64) + (int)*(short *)(iVar1 + 0x30));
      }
    }
    *(undefined4 *)(param_1 + 400) = 2;
  }
  return;
}

