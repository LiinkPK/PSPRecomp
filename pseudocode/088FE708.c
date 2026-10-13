/* Entry 0x088FE708 | file offset 0x000FB6E0 | FUN_088fe708 | bytes 192 */

undefined4 FUN_088fe708(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = FUN_08867984(param_1,0);
  if ((DAT_089d69dc == '\0') || (iVar2 = FUN_08883538(&local_20,uVar1), iVar2 == 0)) {
    FUN_088838a8();
    if (param_4 == '\0') {
      local_1c = FUN_08862854(uVar1,param_2,param_3,1);
    }
    else {
      local_1c = FUN_08862984(uVar1,param_2,param_3);
    }
  }
  else {
    FUN_08935524(param_2,local_20,local_1c);
  }
  return local_1c;
}

