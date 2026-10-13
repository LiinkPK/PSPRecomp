/* Entry 0x08866F34 | file offset 0x00063F0C | FUN_08866f34 | bytes 28 */

undefined4 FUN_08866f34(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x2ccf) == '\x01') {
    uVar1 = 3;
  }
  return uVar1;
}

