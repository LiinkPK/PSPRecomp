/* Entry 0x0887B1B4 | file offset 0x0007818C | FUN_0887b1b4 | bytes 48 */

int FUN_0887b1b4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 0;
  if (param_2 < (int)(uint)*(ushort *)(iVar2 + 10)) {
    iVar1 = iVar2 + *(int *)(iVar2 + 0x10 + param_2 * 8);
  }
  return iVar1;
}

