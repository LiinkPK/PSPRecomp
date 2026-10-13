/* Entry 0x0899B888 | file offset 0x00198860 | FUN_0899b888 | bytes 152 */

int FUN_0899b888(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(&DAT_09af6790 + param_1 * 4);
    if (iVar4 == 0) {
      pcVar1 = (code *)(&PTR_FUN_089da4c0)[param_1];
    }
    else {
      iVar2 = *(int *)(iVar4 + 0xc);
      param_2 = param_2 + *(ushort *)(iVar4 + 6) & ~(uint)*(ushort *)(iVar4 + 6);
      uVar3 = iVar2 + param_2;
      if (uVar3 <= *(uint *)(iVar4 + 8)) {
        *(uint *)(iVar4 + 0xc) = uVar3;
        *(short *)(iVar4 + 4) = *(short *)(iVar4 + 4) + 1;
        return iVar2;
      }
      pcVar1 = (code *)(&PTR_FUN_089da4c0)[param_1];
    }
    iVar4 = (*pcVar1)(param_2);
  }
  return iVar4;
}

