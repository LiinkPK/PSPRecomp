/* Entry 0x0897301C | file offset 0x0016FFF4 | FUN_0897301c | bytes 284 */

void FUN_0897301c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_1[5]) {
    do {
      if (*(int *)(*param_1 + iVar1) != 0) {
        *(int *)(*param_1 + iVar1) = 0;
      }
      if (*(int *)(param_1[3] + iVar1) != 0) {
        (*(code *)param_1[8])();
        *(undefined4 *)(param_1[3] + iVar1) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < param_1[5]);
  }
  if (param_1[1] != 0) {
    FUN_08993754(param_1[1],0xffffffff,8,FUN_089c2d60,FUN_089c26a4,0);
    param_1[1] = 0;
  }
  if (param_1[0x314] != 0) {
    FUN_08973ff0(param_1 + 0xc);
    FUN_08974940(param_1[0x314]);
    param_1[0x314] = 0;
    param_1[0x316] = 0;
  }
  if (param_1[0x315] != 0) {
    FUN_08973ff0(param_1 + 400);
    FUN_08974940(param_1[0x315]);
    param_1[0x315] = 0;
    param_1[0x317] = 0;
  }
  FUN_08942544(param_1);
  return;
}

