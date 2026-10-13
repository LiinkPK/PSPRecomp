/* Entry 0x08971D5C | file offset 0x0016ED34 | FUN_08971d5c | bytes 356 */

int FUN_08971d5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(param_1[9] + 100))((int)param_1 + (int)*(short *)(param_1[9] + 0x60),param_3)
  ;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_08941d40(param_1,param_2);
    if ((iVar1 == -1) && (iVar3 = 0, 0 < param_1[5])) {
      do {
        if (**(int **)(*param_1 + iVar3 * 4) == 0) {
          iVar4 = iVar3 * 4;
          iVar1 = *(int *)(*(int *)(*param_1 + iVar4) + 4);
          (**(code **)(iVar1 + 0x2c))
                    (*(int *)(*param_1 + iVar4) + (int)*(short *)(iVar1 + 0x28),param_3);
          uVar2 = (**(code **)(param_1[9] + 0x5c))
                            ((int)param_1 + (int)*(short *)(param_1[9] + 0x58),param_3);
          *(undefined4 *)(param_1[2] + iVar4) = uVar2;
          *(undefined4 *)(param_1[3] + iVar4) = 0;
          *(int *)(param_1[4] + iVar4) = *(int *)(param_1[4] + iVar4) + 1;
          FUN_08971554(*(undefined4 *)(*param_1 + iVar4),param_1[10]);
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[5]);
    }
  }
  return iVar1;
}

