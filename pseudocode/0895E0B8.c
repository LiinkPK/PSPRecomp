/* Entry 0x0895E0B8 | file offset 0x0015B090 | FUN_0895e0b8 | bytes 80 */

void FUN_0895e0b8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_09b6f478;
  iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1);
  iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
  *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
  return;
}

