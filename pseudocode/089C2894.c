/* Entry 0x089C2894 | file offset 0x001BF86C | FUN_089c2894 | bytes 120 */

void FUN_089c2894(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089dbf90;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c54d8;
    }
    iVar2 = DAT_09b6f478;
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
  }
  return;
}

