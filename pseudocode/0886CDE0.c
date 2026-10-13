/* Entry 0x0886CDE0 | file offset 0x00069DB8 | FUN_0886cde0 | bytes 72 */

int FUN_0886cde0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108) + param_2 * 0xc;
  if (*(short *)(iVar1 + 6) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(iVar1 + 4) + *(int *)(param_1 + (uint)*(byte *)(iVar1 + 9) * 4 + 0x94)
            + 4;
  }
  return iVar1;
}

