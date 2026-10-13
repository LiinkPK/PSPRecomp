/* Entry 0x088988B4 | file offset 0x0009588C | FUN_088988b4 | bytes 32 */

undefined4 FUN_088988b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x14);
  }
  return uVar1;
}

