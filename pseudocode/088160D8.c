/* Entry 0x088160D8 | file offset 0x000130B0 | FUN_088160d8 | bytes 156 */

void FUN_088160d8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x544);
  if (((*(uint *)(param_1 + 0x560) & 2) == 0) && ((*(uint *)(param_1 + 0x560) & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xfffff7ff;
    (**(code **)(iVar1 + 0x16c))(param_1 + *(short *)(iVar1 + 0x168));
  }
  else {
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x800;
    (**(code **)(iVar1 + 0x164))(param_1 + *(short *)(iVar1 + 0x160));
  }
  return;
}

