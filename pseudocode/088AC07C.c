/* Entry 0x088AC07C | file offset 0x000A9054 | FUN_088ac07c | bytes 304 */

undefined4 FUN_088ac07c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*DAT_089d7280 == '\0') {
    while (iVar1 = FUN_088fea4c(), iVar1 != 0) {
      FUN_08883f9c(DAT_089d69e0,1,0);
    }
    FUN_088fe9e8();
    *(undefined1 *)(param_1 + 0xec1) = 0;
    *(undefined1 *)(param_1 + 0xec2) = 0;
    iVar1 = sceUtilitySavedataInitStart(param_1 + 0x1e0);
    if (iVar1 == 0) {
      FUN_088729c0();
      if ((*(uint *)(param_1 + 0xef8) & 2) == 0) {
        FUN_088b16fc();
      }
      *DAT_089d7280 = '\x01';
      *(char *)(param_1 + 0xec3) = param_2;
      if (param_2 == '\0') {
        *(undefined4 *)(param_1 + 2000) = 0;
      }
      uVar2 = FUN_08882274(DAT_089d69a8);
      uVar2 = FUN_088823c4(uVar2,0xffffffff,0x19a28,FUN_088ad0e8,"Update");
      *(undefined4 *)(param_1 + 0xf00) = uVar2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

