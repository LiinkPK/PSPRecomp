/* Entry 0x088A1C38 | file offset 0x0009EC10 | FUN_088a1c38 | bytes 36 */

undefined4 FUN_088a1c38(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    uVar1 = *param_1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

