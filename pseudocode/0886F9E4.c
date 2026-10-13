/* Entry 0x0886F9E4 | file offset 0x0006C9BC | FUN_0886f9e4 | bytes 56 */

int FUN_0886f9e4(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = (int)(short)((ushort)((uint)(iVar2 << 0x11) >> 0x10) ^ (short)cVar1);
  }
  return iVar2;
}

