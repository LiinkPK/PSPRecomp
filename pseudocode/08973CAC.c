/* Entry 0x08973CAC | file offset 0x00170C84 | FUN_08973cac | bytes 212 */

void FUN_08973cac(int *param_1)

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
    FUN_08993754(param_1[1],0xffffffff,8,FUN_089c2dc4,FUN_089c26a4,0);
    param_1[1] = 0;
  }
  FUN_08942544(param_1);
  return;
}

