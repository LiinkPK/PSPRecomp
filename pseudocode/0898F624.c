/* Entry 0x0898F624 | file offset 0x0018C5FC | FUN_0898f624 | bytes 48 */

undefined4 FUN_0898f624(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 0xa4) < 0) || (*(short *)(param_1 + 0xa6) < 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

