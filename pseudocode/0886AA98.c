/* Entry 0x0886AA98 | file offset 0x00067A70 | FUN_0886aa98 | bytes 132 */

undefined4 FUN_0886aa98(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(**(int **)(param_1 + 0x84) + param_2 * 0x60 + 0x50);
  iVar2 = 0;
  do {
    FUN_0886a9b0(param_1,param_2,(int)sVar1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return 1;
}

