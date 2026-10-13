/* Entry 0x0884F878 | file offset 0x0004C850 | FUN_0884f878 | bytes 148 */

undefined4 FUN_0884f878(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  while ((*(short *)(iVar2 + 0x12) == 0 ||
         (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x544),
         iVar1 = (**(code **)(iVar1 + 0xdc))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0xd8)),
         iVar1 == 0))) {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x20;
    param_1 = param_1 + 0x20;
    if (0xf < iVar3) {
      return 0;
    }
  }
  return 1;
}

