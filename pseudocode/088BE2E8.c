/* Entry 0x088BE2E8 | file offset 0x000BB2C0 | FUN_088be2e8 | bytes 84 */

void FUN_088be2e8(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + -4);
  iVar1 = (param_2 + -4) - (int)param_1;
  *(undefined4 *)(param_2 + -4) = *param_1;
  FUN_088be1bc(param_1,0,(int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1e)) >> 2,uVar2,(int)param_3);
  return;
}

