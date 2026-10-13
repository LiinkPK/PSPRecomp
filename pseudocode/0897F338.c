/* Entry 0x0897F338 | file offset 0x0017C310 | FUN_0897f338 | bytes 164 */

void FUN_0897f338(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_a3;
  int *piVar3;
  
  iVar2 = DAT_09b6f478;
  piVar3 = (int *)*in_a3;
  if (piVar3 != (int *)0x0) {
    if (*piVar3 != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*piVar3);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    iVar2 = DAT_09b6f478;
    if (piVar3 != (int *)0x0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),piVar3);
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
  }
  return;
}

