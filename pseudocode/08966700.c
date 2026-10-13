/* Entry 0x08966700 | file offset 0x001636D8 | FUN_08966700 | bytes 224 */

void FUN_08966700(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_4;
  if (piVar4 != (int *)0x0) {
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    if (*piVar4 != 0) {
      iVar1 = FUN_08971010(uVar2);
      iVar3 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
      *piVar4 = 0;
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    if (piVar4[1] != 0) {
      iVar1 = FUN_08971010(uVar2);
      iVar3 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
      piVar4[1] = 0;
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    iVar1 = FUN_08971010(uVar2,*param_4);
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar1;
    *param_4 = 0;
  }
  return;
}

