/* Entry 0x0896753C | file offset 0x00164514 | FUN_0896753c | bytes 276 */

void FUN_0896753c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_09b6f478;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*param_1);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *param_1 = 0;
    }
    iVar2 = DAT_09b6f478;
    if (param_1[1] != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1[1]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      param_1[1] = 0;
    }
    iVar2 = DAT_09b6f478;
    if (param_1[0xd] != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1[0xd]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if ((param_2 & 1) != 0) {
      FUN_0896802c(param_1);
    }
  }
  return;
}

