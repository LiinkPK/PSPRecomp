/* Entry 0x0897C9B4 | file offset 0x0017998C | FUN_0897c9b4 | bytes 152 */

void FUN_0897c9b4(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_4 != 0) {
    iVar1 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),*param_4);
    iVar2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
  }
  if (param_4[3] != 0) {
    iVar1 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),param_4[3]);
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar1;
  }
  return;
}

