/* Entry 0x0898A030 | file offset 0x00187008 | FUN_0898a030 | bytes 556 */

void FUN_0898a030(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_1[3] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[3]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[5] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[5]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[4] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[4]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[6] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[6]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[7] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[7]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[9] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[9]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[0xb] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[0xb]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[0xd] != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_08971010(*(undefined4 *)(iVar2 + 0x18),param_1[0xd]);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,0xa0);
    }
  }
  return;
}

