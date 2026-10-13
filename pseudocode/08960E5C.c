/* Entry 0x08960E5C | file offset 0x0015DE34 | FUN_08960e5c | bytes 96 */

void FUN_08960e5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_09b6f478;
  if (param_1 != 0) {
    iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),param_1);
    iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
  }
  return;
}

