/* Entry 0x088B8038 | file offset 0x000B5010 | FUN_088b8038 | bytes 504 */

int FUN_088b8038(int param_1,undefined2 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = param_1 + *(char *)(param_1 + 0x763) * 0xc6;
  iVar6 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = FUN_088b7a88(iVar7,iVar6,iVar4);
      if (((iVar1 != -1) && (iVar2 = FUN_088b7f58(param_1,iVar1,param_4), iVar2 == 1)) &&
         (iVar5 < param_3)) {
        *param_2 = (short)iVar1;
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc);
    iVar4 = 0;
    do {
      iVar1 = 0;
      do {
        iVar2 = FUN_088b7ab8(iVar7,iVar6,iVar4,iVar1);
        if (((iVar2 != -1) && (iVar3 = FUN_088b7f58(param_1,iVar2,param_4), iVar3 == 1)) &&
           (iVar5 < param_3)) {
          *param_2 = (short)iVar2;
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  iVar6 = 0;
  do {
    iVar4 = FUN_088b7ae8(iVar7,iVar6);
    if (((iVar4 != -1) && (iVar1 = FUN_088b7f58(param_1,iVar4,param_4), iVar1 == 1)) &&
       (iVar5 < param_3)) {
      *param_2 = (short)iVar4;
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  return iVar5;
}

