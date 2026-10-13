/* Entry 0x08933E14 | file offset 0x00130DEC | FUN_08933e14 | bytes 124 */

void FUN_08933e14(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134);
  if (uVar1 < 6) {
    if ((((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) || (uVar1 == 5)) {
      FUN_08933c00(DAT_089d85e8);
    }
    else {
      FUN_08933c54();
    }
  }
  FUN_08933e90(param_1);
  return;
}

