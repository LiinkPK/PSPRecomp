/* Entry 0x08815D90 | file offset 0x00012D68 | FUN_08815d90 | bytes 68 */

undefined4 FUN_08815d90(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xfffffffb;
    FUN_088160d8();
    uVar1 = 0;
  }
  return uVar1;
}

