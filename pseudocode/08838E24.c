/* Entry 0x08838E24 | file offset 0x00035DFC | FUN_08838e24 | bytes 52 */

undefined4 FUN_08838e24(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x196) & 1) == 0) {
    uVar1 = 0x42c80000;
  }
  else {
    uVar1 = 0x447a0000;
  }
  return uVar1;
}

