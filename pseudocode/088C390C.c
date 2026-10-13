/* Entry 0x088C390C | file offset 0x000C08E4 | FUN_088c390c | bytes 204 */

bool FUN_088c390c(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  psVar2 = (short *)(param_2 + 0xf234);
  if (0 < *(int *)(param_2 + 0xfd80)) {
    do {
      iVar1 = FUN_088b29d8((int)*psVar2);
      if ((*(byte *)(iVar1 + 0x10) & 4) == 0) {
        if ((*(byte *)((int)psVar2 + 3) & 8) != 0) {
          *param_1 = *param_1 + 1;
        }
        param_1[1] = param_1[1] + 1;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 2;
    } while (iVar3 < *(int *)(param_2 + 0xfd80));
  }
  return param_1[1] <= *param_1;
}

