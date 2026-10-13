/* Entry 0x0887AFBC | file offset 0x00077F94 | FUN_0887afbc | bytes 196 */

undefined * FUN_0887afbc(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if (param_1[1] == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar1 = FUN_0887a800(param_1[1],param_2,*param_1);
    if (iVar1 == 0) {
      if (param_3 == '\0') {
        puVar3 = &DAT_09b49088;
      }
      else {
        puVar3 = (undefined *)0x0;
      }
    }
    else {
      iVar4 = 2;
      iVar2 = FUN_0887a8f0(param_1[1]);
      if (iVar2 != 0) {
        iVar4 = 4;
      }
      puVar3 = (undefined *)(param_1[1] + iVar1 + iVar4);
      iVar1 = FUN_0887a918();
      if (iVar1 != 0) {
        puVar3 = (undefined *)FUN_0887a940(puVar3);
      }
    }
  }
  return puVar3;
}

