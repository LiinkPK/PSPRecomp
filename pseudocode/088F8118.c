/* Entry 0x088F8118 | file offset 0x000F50F0 | FUN_088f8118 | bytes 316 */

void FUN_088f8118(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_088f8984(param_1);
  iVar3 = *(int *)(param_1 + 0x139f0);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_088f5e80(param_2 + 0x10,param_1 + iVar2 * 0x1260 + 0x1400);
      if (iVar1 == 1) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x31968)) {
    do {
      iVar3 = FUN_088f5e80(param_2 + 0x10,param_1 + iVar2 * 0x1270 + 0x14c80);
      if (iVar3 == 1) {
        iVar3 = **(int **)(param_1 + 0x14c70);
        (**(code **)(iVar3 + 0x1c))
                  ((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar3 + 0x18),iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x31968));
  }
  return;
}

