/* Entry 0x0880AD28 | file offset 0x00007D00 | FUN_0880ad28 | bytes 308 */

int FUN_0880ad28(int *param_1,int param_2,char *param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0880acbc();
  *param_3 = cVar2;
  *(bool *)param_4 =
       (param_1[((uint)(int)*(short *)(param_2 + 0x26) >> 5) + 9] &
       1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU)) == 0;
  if (((*param_3 != '\0') && (*param_1 != 0)) && (iVar3 = FUN_0883739c(), iVar3 != 0)) {
    param_1[0x11] = 0x41f00000;
  }
  iVar3 = *(int *)(param_2 + 0x34);
  if (*(char *)(iVar3 + 0x12) == '\0') {
    sVar1 = *(short *)(param_2 + 0x26);
  }
  else {
    FUN_0880aae0(param_1,param_2,iVar3);
    sVar1 = *(short *)(param_2 + 0x26);
  }
  param_1[((uint)(int)sVar1 >> 5) + 1] =
       param_1[((uint)(int)sVar1 >> 5) + 1] | 1 << ((int)sVar1 & 0x1fU);
  param_1[((uint)(int)*(short *)(param_2 + 0x26) >> 5) + 9] =
       param_1[((uint)(int)*(short *)(param_2 + 0x26) >> 5) + 9] |
       1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU);
  return iVar3;
}

