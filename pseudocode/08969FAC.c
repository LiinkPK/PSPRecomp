/* Entry 0x08969FAC | file offset 0x00166F84 | FUN_08969fac | bytes 360 */

void FUN_08969fac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_089dc508;
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 4));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 8));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0xc));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar2 = DAT_09b6f478;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x10));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_0896a680(param_1);
    }
  }
  return;
}

