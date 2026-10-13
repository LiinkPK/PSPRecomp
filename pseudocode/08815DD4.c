/* Entry 0x08815DD4 | file offset 0x00012DAC | FUN_08815dd4 | bytes 64 */

undefined4 FUN_08815dd4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) | 4;
    FUN_088160d8();
    uVar1 = 0;
  }
  return uVar1;
}

