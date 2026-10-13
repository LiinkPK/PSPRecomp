/* Entry 0x08837360 | file offset 0x00034338 | FUN_08837360 | bytes 40 */

undefined4 FUN_08837360(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(short *)(param_1 + 0x180) == 0x1d6) || (*(short *)(param_1 + 0x180) == 0x1d7)) {
    uVar1 = 1;
  }
  return uVar1;
}

