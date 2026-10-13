/* Entry 0x0899C1D4 | file offset 0x001991AC | FUN_0899c1d4 | bytes 120 */

undefined4 FUN_0899c1d4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x2e);
    if (-1 < param_2 && param_2 < (int)(uint)*(ushort *)(iVar2 + 0x2a)) {
      param_3 = param_3 % (int)uVar3;
      if (uVar3 == 0) {
        trap(7);
      }
      if (param_3 < 0) {
        param_3 = param_3 + uVar3;
      }
      uVar1 = *(undefined4 *)
               (((uint)*(ushort *)(iVar2 + 0x2a) * param_3 + param_2) * 4 +
               iVar2 + *(int *)(iVar2 + 0x18));
    }
  }
  return uVar1;
}

