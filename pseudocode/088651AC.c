/* Entry 0x088651AC | file offset 0x00062184 | FUN_088651ac | bytes 32 */

undefined4 FUN_088651ac(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *DAT_089d5eb0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

