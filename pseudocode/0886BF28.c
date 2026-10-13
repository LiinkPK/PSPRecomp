/* Entry 0x0886BF28 | file offset 0x00068F00 | FUN_0886bf28 | bytes 296 */

void FUN_0886bf28(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char local_20;
  
  if (param_3 == '\0') {
    puVar3 = (undefined4 *)FUN_0886cde0(param_1,param_2);
    if ((puVar3 != (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)FUN_0886ce28(param_1,param_2), puVar4 != (undefined4 *)0x0)) {
      local_20 = (char)*puVar3;
      if (local_20 != 0) {
        FUN_089b4908(puVar3 + local_20);
      }
      local_20 = (char)*puVar4;
      if (local_20 != 0) {
        FUN_089b4908(puVar4 + local_20);
      }
    }
  }
  else {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar5 = param_2; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      iVar2 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar5,param_2);
      if (iVar2 != 0) {
        FUN_0886bf28(param_1,iVar5,0);
      }
    }
  }
  return;
}

