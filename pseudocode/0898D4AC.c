/* Entry 0x0898D4AC | file offset 0x0018A484 | FUN_0898d4ac | bytes 112 */

void FUN_0898d4ac(int param_1)

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

