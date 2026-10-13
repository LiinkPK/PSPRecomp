/* Entry 0x08971FC8 | file offset 0x0016EFA0 | FUN_08971fc8 | bytes 184 */

void FUN_08971fc8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_2 = param_2 * 4;
  FUN_08971618(*(undefined4 *)(*param_1 + param_2),param_1[10]);
  piVar1 = *(int **)(*param_1 + param_2);
  if (*piVar1 != 0) {
    (**(code **)(piVar1[1] + 0x2c))((int)piVar1 + (int)*(short *)(piVar1[1] + 0x28),0);
  }
  if (*(int *)(param_1[3] + param_2) == 0) {
    iVar2 = param_1[2];
  }
  else {
    (*(code *)param_1[8])();
    *(undefined4 *)(param_1[3] + param_2) = 0;
    iVar2 = param_1[2];
  }
  *(undefined4 *)(iVar2 + param_2) = 0;
  *(undefined4 *)(param_1[4] + param_2) = 0;
  return;
}

