/* Entry 0x088135D4 | file offset 0x000105AC | FUN_088135d4 | bytes 728 */

void FUN_088135d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (iVar1 = FUN_08869ab4(param_1,PTR_s_battle_bin_089d48d0), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    FUN_0885c93c(uVar2);
    iVar1 = FUN_0885ca98(uVar2,1,0x706b7461,0);
    FUN_0880be34(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x63657073,0);
    FUN_0884e5c0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x706b656e,0);
    FUN_08830c74(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x62726373,0);
    FUN_0884a944(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x726d6163,0);
    FUN_08811598(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x67726863,0);
    FUN_08811a58(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = FUN_0885ca98(uVar2,1,0x61726373,0);
    if (iVar1 != 0) {
      FUN_0884c588(DAT_089d4d80,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar1 = FUN_0885ca98(uVar2,1,0x706e7077,0);
    FUN_08850ab8(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  return;
}

