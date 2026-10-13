/* Entry 0x0886C5C4 | file offset 0x0006959C | FUN_0886c5c4 | bytes 432 */

void FUN_0886c5c4(int param_1,int param_2,char param_3,uint param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != '\0') {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar4 = param_2; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar2 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar4,param_2);
      if (iVar2 != 0) {
        FUN_0886c5c4(param_1,iVar4,0,param_4,param_5,param_6);
      }
    }
  }
  FUN_089a0c20(param_5);
  if (((int)param_4 < 0xff) && (-1 < (int)param_4)) {
    FUN_089b0d88(*(undefined4 *)(param_1 + 0xc),0x200000,0);
    uVar3 = param_4 << 0x10 | param_4 << 0x18 | param_4 | param_4 << 8;
    if (param_6 == '\0') {
      FUN_089a12a4(0,10,10,uVar3,-1 - uVar3);
    }
    else {
      FUN_089a12a4(0,10,10,uVar3,0xffffffff);
    }
  }
  else {
    FUN_089b0d88(*(undefined4 *)(param_1 + 0xc),0x200000,0x200000);
  }
  FUN_089a0384(0x15);
  FUN_089b47ac(*(undefined4 *)(param_1 + 0xc),param_2,0);
  FUN_089a03dc(0x15);
  FUN_089b0d88(*(undefined4 *)(param_1 + 0xc),0x200000,0x200000);
  if (param_5 != -1) {
    FUN_089a0c20(0xffffffff);
  }
  return;
}

