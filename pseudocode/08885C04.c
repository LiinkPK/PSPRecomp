/* Entry 0x08885C04 | file offset 0x00082BDC | FUN_08885c04 | bytes 184 */

void FUN_08885c04(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_08869ab4(param_1,"common.bin"), iVar1 != 0)) {
    FUN_0887ac70(DAT_089d69f0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(DAT_089d6998 + 0xc));
    iVar1 = FUN_08869ab4(param_1,"pause_menu.bin");
    if (iVar1 != 0) {
      FUN_0887ac70(DAT_089d69f0 + 0x10,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                   *(undefined4 *)(DAT_089d6998 + 0xc));
    }
  }
  return;
}

