/* Entry 0x08897460 | file offset 0x00094438 | FUN_08897460 | bytes 184 */

undefined4 FUN_08897460(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08862c40(param_2,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0885c6cc(param_1[0x3c],iVar1,0x40,0,1,0);
    *param_1 = uVar2;
    FUN_088fe708(param_2,uVar2,iVar1,0);
    uVar2 = *param_1;
    if (param_3 != '\0') {
      FUN_088fe944(param_2,uVar2,iVar1);
      uVar2 = *param_1;
    }
  }
  return uVar2;
}

