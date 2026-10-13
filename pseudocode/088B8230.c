/* Entry 0x088B8230 | file offset 0x000B5208 | FUN_088b8230 | bytes 220 */

int FUN_088b8230(int param_1,short *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  psVar2 = (short *)(param_1 + 0x3de);
  do {
    if (((*psVar2 != -1) && (iVar1 = FUN_088b7f58(param_1,(int)*psVar2,param_4), iVar1 == 1)) &&
       (iVar4 < param_3)) {
      iVar4 = iVar4 + 1;
      *param_2 = *psVar2;
      param_2 = param_2 + 1;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 3;
  } while (iVar3 < 0x96);
  return iVar4;
}

