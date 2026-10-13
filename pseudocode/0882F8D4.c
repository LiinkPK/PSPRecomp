/* Entry 0x0882F8D4 | file offset 0x0002C8AC | FUN_0882f8d4 | bytes 212 */

void FUN_0882f8d4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = DAT_09af84cc;
  uVar1 = DAT_09af84c8;
  uVar4 = DAT_09af84c4;
  if (*(short *)(param_2 + 0x50) < 0) {
    *param_1 = DAT_09af84c0;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    iVar3 = FUN_0886b5b8(*(undefined4 *)(*(int *)(param_2 + 0x30) + 0x394));
    FUN_089a3868(&local_20,iVar3 + 0x30);
    uVar4 = FUN_089a457c(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x28));
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = uVar4;
  }
  return;
}

