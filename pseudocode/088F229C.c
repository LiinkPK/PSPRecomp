/* Entry 0x088F229C | file offset 0x000EF274 | FUN_088f229c | bytes 100 */

void FUN_088f229c(undefined1 param_1,char param_2)

{
  int iVar1;
  
  iVar1 = DAT_089d712c;
  *(undefined1 *)(DAT_089d712c + 0x1ded8) = param_1;
  *(undefined1 *)(iVar1 + 0x1ded9) = 0;
  *(undefined1 *)(iVar1 + 0x1deda) = 0;
  *(undefined1 *)(iVar1 + 0x1dedc) = 10;
  *(undefined1 *)(iVar1 + 0x1dedf) = 0;
  if (param_2 != '\0') {
    *(undefined1 *)(iVar1 + 0x1dedb) = 0;
    *(undefined1 *)(iVar1 + 0x1dedd) = 1;
    *(undefined1 *)(iVar1 + 0x1dede) = 0;
  }
  FUN_088f20e8();
  return;
}

