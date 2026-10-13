/* Entry 0x088D4BF4 | file offset 0x000D1BCC | FUN_088d4bf4 | bytes 76 */

undefined4 FUN_088d4bf4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x29) {
    uVar1 = FUN_088a24d4(0,*(undefined4 *)(&DAT_089cbe60 + param_1 * 4),1,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

