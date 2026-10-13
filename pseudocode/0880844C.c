/* Entry 0x0880844C | file offset 0x00005424 | FUN_0880844c | bytes 28 */

undefined4 FUN_0880844c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_089d2800;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x6c);
  }
  return uVar1;
}

