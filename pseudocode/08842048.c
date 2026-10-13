/* Entry 0x08842048 | file offset 0x0003F020 | FUN_08842048 | bytes 32 */

undefined4 FUN_08842048(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_089d4958 + 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xb54);
  }
  return uVar1;
}

