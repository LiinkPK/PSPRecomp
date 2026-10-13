/* Entry 0x088E6728 | file offset 0x000E3700 | FUN_088e6728 | bytes 60 */

void FUN_088e6728(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x100000;
  if (param_2 != '\0') {
    uVar1 = 0x280000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0886658c(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

