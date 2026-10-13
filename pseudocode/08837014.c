/* Entry 0x08837014 | file offset 0x00033FEC | FUN_08837014 | bytes 28 */

undefined4 FUN_08837014(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3a0) + 0x18);
  }
  return uVar1;
}

