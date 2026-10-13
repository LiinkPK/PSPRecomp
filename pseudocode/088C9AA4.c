/* Entry 0x088C9AA4 | file offset 0x000C6A7C | FUN_088c9aa4 | bytes 72 */

undefined4 FUN_088c9aa4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xbde8) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_088ff908();
  }
  return uVar1;
}

