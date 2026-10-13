/* Entry 0x088C4474 | file offset 0x000C144C | FUN_088c4474 | bytes 204 */

bool FUN_088c4474(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  *param_1 = 0;
  psVar3 = (short *)(param_2 + 0xe788);
  param_1[1] = *param_3;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xfd7c)) {
    do {
      iVar1 = FUN_088c0f8c((int)*psVar3);
      if ((((*(byte *)(iVar1 + 10) & 4) == 0) && ((*(byte *)(iVar1 + 10) & 0x20) != 0)) &&
         ((*(byte *)((int)psVar3 + 3) & 8) != 0)) {
        *param_1 = *param_1 + 1;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 2;
    } while (iVar2 < *(int *)(param_2 + 0xfd7c));
  }
  return param_1[1] <= *param_1;
}

