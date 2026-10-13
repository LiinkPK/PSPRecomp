/* Entry 0x088E33E8 | file offset 0x000E03C0 | FUN_088e33e8 | bytes 64 */

void FUN_088e33e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0886658c(*(undefined4 *)(param_1 + 0x674));
  *(undefined4 *)(param_1 + 0x670) = uVar1;
  FUN_0887e630(DAT_089d6998,uVar1,*(undefined4 *)(param_1 + 0x674));
  return;
}

