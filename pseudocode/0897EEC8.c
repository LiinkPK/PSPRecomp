/* Entry 0x0897EEC8 | file offset 0x0017BEA0 | FUN_0897eec8 | bytes 140 */

void FUN_0897eec8(void)

{
  int iVar1;
  int iVar2;
  int *in_a3;
  
  iVar2 = DAT_09b6f478;
  in_a3 = (int *)*in_a3;
  if ((in_a3 != (int *)0x0) && (in_a3 != (int *)0x0)) {
    if ((in_a3 != (int *)0x0) && (*in_a3 != 0)) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*in_a3);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    FUN_0898d4ac(in_a3,0x30);
  }
  return;
}

