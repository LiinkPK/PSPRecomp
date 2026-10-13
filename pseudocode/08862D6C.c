/* Entry 0x08862D6C | file offset 0x0005FD44 | FUN_08862d6c | bytes 156 */

undefined4 FUN_08862d6c(undefined4 param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088630c8();
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = FUN_088631ac(uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_08871644(*(undefined4 *)(DAT_089d5ea0 + 8),uVar1);
    (*param_2)(uVar1,param_3);
  }
  else {
    (*param_2)(iVar2,param_3);
  }
  return 1;
}

