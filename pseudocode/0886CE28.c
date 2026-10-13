/* Entry 0x0886CE28 | file offset 0x00069E00 | FUN_0886ce28 | bytes 84 */

int FUN_0886ce28(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108) + param_2 * 0xc;
  if (*(ushort *)(iVar1 + 6) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(iVar1 + 4) + *(int *)(param_1 + (uint)*(byte *)(iVar1 + 9) * 4 + 0x94)
            + (uint)(*(ushort *)(iVar1 + 6) >> 2) * 4 + -8;
  }
  return iVar1;
}

