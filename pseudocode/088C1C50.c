/* Entry 0x088C1C50 | file offset 0x000BEC28 | FUN_088c1c50 | bytes 132 */

undefined4
FUN_088c1c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_088c1cfc(param_1,auStack_20,param_4,param_5);
  if (iVar1 == 1) {
    uVar2 = FUN_088c1f6c(param_1,param_2,param_3,auStack_20,param_5);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

