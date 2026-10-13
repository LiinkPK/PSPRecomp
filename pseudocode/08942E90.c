/* Entry 0x08942E90 | file offset 0x0013FE68 | FUN_08942e90 | bytes 112 */

void FUN_08942e90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  iVar1 = *piVar2;
  if (0 < iVar1) {
    *piVar2 = iVar1 + -1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  }
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x50),param_2);
  }
  return;
}

