/* Entry 0x08906AD8 | file offset 0x00103AB0 | FUN_08906ad8 | bytes 136 */

void FUN_08906ad8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0xb4];
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x28));
    if (iVar1 == 1) {
      *param_1 = 2;
    }
    else {
      iVar1 = *(int *)param_1[0xb4];
      (**(code **)(iVar1 + 0xc))
                ((int)param_1[0xb4] + (int)*(short *)(iVar1 + 8),param_1[0xb6],param_1[0xb7]);
      *param_1 = 1;
    }
  }
  return;
}

