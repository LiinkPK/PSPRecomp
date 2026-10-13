/* Entry 0x088091A0 | file offset 0x00006178 | FUN_088091a0 | bytes 136 */

bool FUN_088091a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 < 0xfa) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    param_1[iVar1 * 8 + 1] = *param_2;
    param_1[iVar1 * 8 + 2] = param_2[1];
    param_1[iVar1 * 8 + 3] = param_2[2];
    param_1[iVar1 * 8 + 4] = param_2[3];
    param_1[iVar1 * 8 + 5] = param_2[4];
    FUN_089a34c0(param_1 + iVar1 * 8 + 6,param_2 + 5);
  }
  return iVar2 < 0xfa;
}

