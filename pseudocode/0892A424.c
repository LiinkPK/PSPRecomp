/* Entry 0x0892A424 | file offset 0x001273FC | FUN_0892a424 | bytes 240 */

undefined4 FUN_0892a424(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  
  param_1 = param_1 + 0x44;
  iVar3 = 0;
  while ((iVar1 = FUN_088b7b18(param_2,iVar3), iVar1 == -1 ||
         (iVar1 = FUN_088c53fc(param_1,iVar1), iVar1 != 0))) {
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      iVar3 = 0;
      psVar4 = (short *)(param_2 + 0xa2);
      while ((*psVar4 == -1 || (iVar1 = FUN_088c54bc(param_1,(int)*psVar4), iVar1 != 0))) {
        iVar3 = iVar3 + 1;
        psVar4 = psVar4 + 1;
        if (9 < iVar3) {
          if ((*(char *)(param_2 + 0xba) == -1) ||
             (iVar3 = FUN_088c5534(param_1,(int)*(char *)(param_2 + 0xba)), iVar3 != 0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
          return uVar2;
        }
      }
      return 1;
    }
  }
  return 1;
}

