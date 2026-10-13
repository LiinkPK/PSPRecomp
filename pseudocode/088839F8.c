/* Entry 0x088839F8 | file offset 0x000809D0 | FUN_088839f8 | bytes 192 */

undefined4 FUN_088839f8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (DAT_089d69cc == 0) {
    uVar1 = sceUmdGetDriveStat();
    if ((uVar1 & 0x20) == 0) {
      return 0;
    }
    if (DAT_089d69df != '\0') {
      return 0;
    }
    if (DAT_089d69de != '\0') {
      return 0;
    }
    DAT_089d69d0 = FUN_08882e80();
    if (DAT_089d69d0 != 0) {
      uVar2 = FUN_08882ef0();
      DAT_089d69cc = FUN_0885c40c(DAT_089d69d0,uVar2,"VOLATILE MEMORY LOADER",0x10);
      return 1;
    }
  }
  return 0;
}

