/* Entry 0x08927458 | file offset 0x00124430 | FUN_08927458 | bytes 140 */

void FUN_08927458(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08862758(0x97a0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_08935828(uVar1,0,0x97a0);
  uVar1 = FUN_08862758(0x55c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_08935828(uVar1,0,0x55c);
  uVar1 = FUN_08862758(0x78);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_08935828(uVar1,0,0x78);
  return;
}

