/* Entry 0x088FE850 | file offset 0x000FB828 | FUN_088fe850 | bytes 244 */

undefined4
FUN_088fe850(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
            undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = FUN_08867984(param_1,0);
  if ((DAT_089d69dc == '\0') || (iVar2 = FUN_08883538(&local_30,uVar1), iVar2 == 0)) {
    FUN_088838a8();
    if (param_6 == '\0') {
      uVar1 = FUN_088629dc(uVar1,param_2,param_3,param_4,param_5,1);
    }
    else {
      uVar1 = FUN_08862bb4(uVar1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    FUN_08935524(param_2,local_30,local_2c);
    (*param_4)(local_2c,param_5);
    uVar1 = 1;
  }
  return uVar1;
}

