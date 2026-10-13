/* Entry 0x0887AD78 | file offset 0x00077D50 | FUN_0887ad78 | bytes 308 */

undefined4
FUN_0887ad78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1[1] == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0887a800(param_1[1],param_3,*param_1);
    if (iVar1 == 0) {
      if (param_6 == '\0') {
        uVar3 = FUN_0887d868(DAT_089d6998,0,&DAT_09b49088,0xffffffff,0,0,0,0);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      iVar4 = 2;
      iVar2 = FUN_0887a8f0(param_1[1]);
      if (iVar2 != 0) {
        iVar4 = 4;
      }
      iVar4 = param_1[1] + iVar1 + iVar4;
      iVar1 = FUN_0887a918();
      if (iVar1 != 0) {
        iVar4 = FUN_0887a940(iVar4);
      }
      uVar3 = FUN_0887d868(DAT_089d6998,param_2,iVar4,0,0,param_4,param_5,0);
    }
  }
  return uVar3;
}

