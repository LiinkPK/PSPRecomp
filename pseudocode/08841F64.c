/* Entry 0x08841F64 | file offset 0x0003EF3C | FUN_08841f64 | bytes 32 */

undefined4 FUN_08841f64(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_089d4958 + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  }
  return uVar1;
}

