/* Entry 0x089291E4 | file offset 0x001261BC | FUN_089291e4 | bytes 204 */

void FUN_089291e4(short *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (param_4 <= iVar5) {
        *param_1 = 0;
        return;
      }
      iVar3 = iVar2;
      psVar4 = param_1;
      if (*param_3 != 10) {
        if (param_2 <= iVar2 + 1) {
          *param_1 = 0;
          return;
        }
        *param_1 = *param_3;
        psVar4 = param_1 + 1;
        iVar1 = iVar1 + 1;
        if (*param_3 == 0) {
          return;
        }
        iVar3 = iVar2 + 1;
        if (iVar1 % param_5 == 0) {
          if (param_2 <= iVar2 + 2) {
            *psVar4 = 0;
            return;
          }
          *psVar4 = 10;
          iVar3 = iVar2 + 2;
          psVar4 = param_1 + 2;
        }
      }
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 1;
      iVar2 = iVar3;
      param_1 = psVar4;
    } while (iVar5 < param_2);
  }
  return;
}

