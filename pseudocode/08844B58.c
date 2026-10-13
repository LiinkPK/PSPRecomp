/* Entry 0x08844B58 | file offset 0x00041B30 | FUN_08844b58 | bytes 108 */

void FUN_08844b58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_0888204c(0x100000);
    FUN_088445d8(DAT_089d4960,uVar1,0x100000);
    FUN_0888208c(uVar1);
  }
  else {
    FUN_088445d8(DAT_089d4960,param_1,param_2);
  }
  return;
}

