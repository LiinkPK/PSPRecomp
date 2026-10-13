/* Entry 0x089888A4 | file offset 0x0018587C | FUN_089888a4 | bytes 448 */

void FUN_089888a4(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089dd270;
    piVar2 = *(int **)(param_1 + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
    }
    piVar2 = *(int **)(param_1 + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
    }
    iVar4 = DAT_09b6f478;
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x68));
      iVar3 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(iVar4 + 0x18),*(int *)(param_1 + 0x70));
      iVar3 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(iVar4 + 0x18),*(int *)(param_1 + 0x78));
      iVar4 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) - iVar1;
    }
    if ((param_1 != -0x38) && (*(undefined **)(param_1 + 0x38) = &DAT_089dd2e8, param_1 != -0x38)) {
      *(undefined **)(param_1 + 0x38) = &DAT_089c5630;
    }
    if ((param_1 != -0x10) && (*(undefined **)(param_1 + 0x10) = &DAT_089dd2c8, param_1 != -0x10)) {
      *(undefined **)(param_1 + 0x10) = &DAT_089c5630;
    }
    if (param_1 != 0) {
      *(undefined **)(param_1 + 4) = &DAT_089c55f8;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,0x90);
    }
  }
  return;
}

