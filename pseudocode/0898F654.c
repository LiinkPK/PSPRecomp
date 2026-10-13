/* Entry 0x0898F654 | file offset 0x0018C62C | FUN_0898f654 | bytes 48 */

undefined4 FUN_0898f654(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 0xaa) < 0) || (*(short *)(param_1 + 0xac) < 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

