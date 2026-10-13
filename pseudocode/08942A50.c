/* Entry 0x08942A50 | file offset 0x0013FA28 | FUN_08942a50 | bytes 212 */

void FUN_08942a50(int *param_1)

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
    FUN_08993754(param_1[1],0xffffffff,0x10,FUN_089c26e4,FUN_089c26a4,0);
    param_1[1] = 0;
  }
  FUN_08942544(param_1);
  return;
}

