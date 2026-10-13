/* Entry 0x0898F9C8 | file offset 0x0018C9A0 | FUN_0898f9c8 | bytes 300 */

void FUN_0898f9c8(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dd338;
    iVar3 = DAT_09b6f478;
    if (param_1[0x2f] != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1[0x2f]);
      iVar2 = iVar3 + (uint)*(ushort *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (param_1[0x30] != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(iVar3 + 0x18),param_1[0x30]);
      iVar3 = iVar3 + (uint)*(ushort *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
    }
    iVar3 = DAT_09b6f478;
    if (param_1 != (undefined4 *)0xfffffffc) {
      if (param_1[10] != 0) {
        iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1[10]);
        iVar3 = iVar3 + (uint)*(ushort *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5650;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,200);
    }
  }
  return;
}

