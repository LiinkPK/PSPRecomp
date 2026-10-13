/* Entry 0x08935A0C | file offset 0x001329E4 | FUN_08935a0c | bytes 236 */

int FUN_08935a0c(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  while (param_3 != 0) {
    iVar6 = (int)(char)*param_1;
    iVar4 = (int)(char)*param_2;
    iVar5 = iVar6;
    if (((&DAT_089cf591)[iVar6] & 1) != 0) {
      iVar5 = iVar6 + 0x20;
    }
    iVar3 = iVar4;
    if (((&DAT_089cf591)[iVar4] & 1) != 0) {
      iVar3 = iVar4 + 0x20;
    }
    if ((((iVar5 != iVar3) || (param_3 + -1 == 0)) || (iVar6 == 0)) || (iVar4 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  if (((&DAT_089cf591)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  if (((&DAT_089cf591)[uVar1] & 1) == 0) {
    return uVar2 - uVar1;
  }
  return uVar2 - (uVar1 + 0x20);
}

