/* Entry 0x08989B44 | file offset 0x00186B1C | FUN_08989b44 | bytes 176 */

void FUN_08989b44(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dd2a8;
    iVar2 = DAT_09b6f478;
    if (param_1 != (undefined4 *)0xfffffffc) {
      if (param_1[10] != 0) {
        iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1[10]);
        iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c56c0;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,0x34);
    }
  }
  return;
}

