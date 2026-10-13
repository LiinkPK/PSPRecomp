/* Entry 0x08842068 | file offset 0x0003F040 | FUN_08842068 | bytes 32 */

undefined4 FUN_08842068(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_089d4958 + 0x24);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x5f0);
  }
  return uVar1;
}

