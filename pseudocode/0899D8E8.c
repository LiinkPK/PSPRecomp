/* Entry 0x0899D8E8 | file offset 0x0019A8C0 | FUN_0899d8e8 | bytes 172 */

void FUN_0899d8e8(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  uVar2 = param_3 + 7U & 0xfffffff8;
  puVar6 = (ushort *)((int)param_1 + uVar2 * (param_4 * 2 + -2));
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar2 = -uVar2;
    puVar6 = param_1;
  }
  if (0 < param_4) {
    do {
      iVar3 = param_3;
      puVar4 = puVar6;
      puVar5 = param_2;
      if (0 < param_3) {
        do {
          uVar1 = *puVar5;
          iVar3 = iVar3 + -1;
          *puVar4 = uVar1 & 0x3e0 | (ushort)(((uint)uVar1 << 0x11) >> 0x1b) |
                    (ushort)((uVar1 & 0x1f) << 10) | 0x8000;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar3 != 0);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + (param_3 + 1U & 0xfffffffe);
      puVar6 = puVar6 + -uVar2;
    } while (param_4 != 0);
  }
  return;
}

