/* Entry 0x0886BD70 | file offset 0x00068D48 | FUN_0886bd70 | bytes 440 */

void FUN_0886bd70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_30;
  
  if (param_5 == '\0') {
    puVar3 = (undefined4 *)FUN_0886cde0(param_1,param_2);
    if ((puVar3 != (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)FUN_0886ce28(param_1,param_2), puVar4 != (undefined4 *)0x0)) {
      local_30 = (char)*puVar3;
      if (local_30 != 0) {
        uVar7 = FUN_08864cb8(param_3);
        uVar8 = FUN_08864cc0(param_3);
        uVar5 = FUN_08864cc8(param_3);
        FUN_089b5438(uVar7,uVar8,puVar3 + local_30,uVar5);
      }
      local_30 = (char)*puVar4;
      if (local_30 != 0) {
        uVar7 = FUN_08864cb8(param_4);
        uVar8 = FUN_08864cc0(param_4);
        uVar5 = FUN_08864cc8(param_4);
        FUN_089b5438(uVar7,uVar8,puVar4 + local_30,uVar5);
      }
    }
  }
  else {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar6 = param_2; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      iVar2 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar6,param_2);
      if (iVar2 != 0) {
        FUN_0886bd70(param_1,iVar6,param_3,param_4,0);
      }
    }
  }
  return;
}

