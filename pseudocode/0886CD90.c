/* Entry 0x0886CD90 | file offset 0x00069D68 | FUN_0886cd90 | bytes 80 */

uint FUN_0886cd90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_089b0e78(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_089b0f98();
    uVar2 = uVar2 & 0xfff;
    if (uVar2 == 0xfff) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

