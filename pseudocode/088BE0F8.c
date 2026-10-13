/* Entry 0x088BE0F8 | file offset 0x000BB0D0 | FUN_088be0f8 | bytes 196 */

void FUN_088be0f8(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)((param_2 - param_1) + ((uint)(param_2 - param_1 >> 2) >> 0x1e)) >> 2;
  if (1 < iVar4) {
    iVar3 = (iVar4 - (iVar4 + -2 >> 0x1f)) + -2 >> 1;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 4);
    uVar1 = *puVar2;
    while( true ) {
      FUN_088be1bc(param_1,iVar3,iVar4,uVar1,(int)param_3);
      puVar2 = puVar2 + -1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar1 = *puVar2;
    }
  }
  return;
}

