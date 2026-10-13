/* Entry 0x089691E4 | file offset 0x001661BC | FUN_089691e4 | bytes 236 */

void FUN_089691e4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_089dc4e8;
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x24));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x28));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_08969fac(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089699a4(param_1);
    }
  }
  return;
}

