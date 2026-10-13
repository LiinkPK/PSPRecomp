/* Entry 0x08841F84 | file offset 0x0003EF5C | FUN_08841f84 | bytes 32 */

undefined4 FUN_08841f84(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_089d4958 + 0x14);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1114);
  }
  return uVar1;
}

