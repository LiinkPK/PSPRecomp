/* Entry 0x08889C38 | file offset 0x00086C10 | FUN_08889c38 | bytes 164 */

void FUN_08889c38(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_3 = -1;
  param_3[1] = -1;
  cVar1 = *(char *)(&DAT_09afb8a0 + param_2 * 0x418);
  iVar3 = 0;
  if (((&DAT_09afc7dc)[param_2 * 0x830] != -1) &&
     (iVar2 = FUN_088bbd8c(), *(char *)(iVar2 + 3) == '\x02')) {
    iVar3 = 1;
  }
  if (cVar1 != -1) {
    *param_3 = (int)cVar1;
    param_3[1] = iVar3;
  }
  return;
}

