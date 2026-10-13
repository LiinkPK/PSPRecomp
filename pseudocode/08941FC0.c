/* Entry 0x08941FC0 | file offset 0x0013EF98 | FUN_08941fc0 | bytes 304 */

int FUN_08941fc0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(param_1[9] + 100))((int)param_1 + (int)*(short *)(param_1[9] + 0x60),param_3)
  ;
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[5])) {
    do {
      if (**(int **)(*param_1 + iVar1 * 4) == 0) {
        iVar4 = iVar1 * 4;
        iVar3 = *(int *)(*(int *)(*param_1 + iVar4) + 4);
        (**(code **)(iVar3 + 0x2c))
                  (*(int *)(*param_1 + iVar4) + (int)*(short *)(iVar3 + 0x28),param_3);
        uVar2 = (**(code **)(param_1[9] + 0x5c))
                          ((int)param_1 + (int)*(short *)(param_1[9] + 0x58),param_3);
        *(undefined4 *)(param_1[2] + iVar4) = uVar2;
        *(undefined4 *)(param_1[3] + iVar4) = param_3;
        *(int *)(param_1[4] + iVar4) = *(int *)(param_1[4] + iVar4) + 1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[5]);
  }
  return -1;
}

