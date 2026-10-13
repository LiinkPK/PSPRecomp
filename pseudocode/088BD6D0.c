/* Entry 0x088BD6D0 | file offset 0x000BA6A8 | FUN_088bd6d0 | bytes 228 */

void FUN_088bd6d0(int param_1,int param_2,int *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int local_20;
  
  iVar4 = 0;
  psVar3 = param_4;
  if (0 < *(int *)(param_4 + 0x18)) {
    do {
      local_20 = (int)*psVar3;
      if (-1 < local_20) {
        iVar1 = FUN_088bdcc0(param_1,param_1 + *param_3 * 4,&local_20);
        iVar2 = *param_3 * 4;
        if (iVar1 == param_1 + iVar2) {
          if (param_2 <= *param_3) {
            return;
          }
          *(int *)(param_1 + iVar2) = local_20;
          *param_3 = *param_3 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 6;
    } while (iVar4 < *(int *)(param_4 + 0x18));
  }
  return;
}

