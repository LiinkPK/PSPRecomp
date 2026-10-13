/* Entry 0x0886C38C | file offset 0x00069364 | FUN_0886c38c | bytes 568 */

void FUN_0886c38c(int param_1,int param_2,char param_3,uint param_4,undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  iVar8 = param_2 * 0xc;
  if (param_3 != '\0') {
    iVar1 = FUN_089b0e3c(uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    for (iVar7 = param_2; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      iVar2 = FUN_089b2ccc(uVar3,iVar7,param_2);
      if (iVar2 != 0) {
        FUN_0886c38c(param_1,iVar7,0,param_4,param_5,param_6);
      }
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  FUN_089b0d88(uVar3,0x21,0);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x108) + iVar8);
  if ((puVar4[2] & 0x10000) == 0) {
    FUN_089a0c20(param_5);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    FUN_089a0c20(*puVar4);
    param_4 = (int)(param_4 * (*(uint *)(*(int *)(param_1 + 0x108) + iVar8) >> 0x18)) / 0xff;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  if (((int)param_4 < 0xff) && (-1 < (int)param_4)) {
    FUN_089b0d88(uVar3,0x200000,0);
    uVar6 = 0xff - param_4;
    uVar5 = param_4 | param_4 << 8 | param_4 << 0x10;
    if (param_6 == '\0') {
      FUN_089a12a4(0,10,10,uVar5,uVar6 | uVar6 * 0x100 | uVar6 * 0x10000);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      FUN_089a12a4(0,10,10,uVar5,0xffffffff);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  else {
    FUN_089b0d88(uVar3,0x200000,0x200000);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  FUN_089b47ac(uVar3,param_2,0);
  if ((*(uint *)(*(int *)(param_1 + 0x108) + iVar8 + 8) & 0x10000) != 0) {
    FUN_089a0c20(param_5);
  }
  FUN_089b0d88(*(undefined4 *)(param_1 + 0xc),0x20,1);
  return;
}

