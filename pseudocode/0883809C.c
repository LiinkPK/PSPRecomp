/* Entry 0x0883809C | file offset 0x00035074 | FUN_0883809c | bytes 92 */

undefined4 FUN_0883809c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(param_1 + 0x180);
  if ((((sVar1 == 0x2be) || (sVar1 == 0x2bf)) || (sVar1 == 0x2c0)) ||
     (((sVar1 == 0x2f0 || (sVar1 == 0x2f1)) || (sVar1 == 0x2f2)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08838074();
  }
  return uVar2;
}

