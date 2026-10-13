/* Entry 0x08942400 | file offset 0x0013F3D8 | FUN_08942400 | bytes 164 */

void FUN_08942400(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_2 = param_2 * 4;
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

