/* Entry 0x088420A8 | file offset 0x0003F080 | FUN_088420a8 | bytes 32 */

undefined4 FUN_088420a8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_089d4958 + 0x34);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x550);
  }
  return uVar1;
}

