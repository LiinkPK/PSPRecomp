/* Entry 0x0890EA5C | file offset 0x0010BA34 | FUN_0890ea5c | bytes 556 */

void FUN_0890ea5c(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [32];
  
  FUN_088fe7c8(PTR_s_worldmap_bin_089d8374,0);
  uVar1 = FUN_0891118c(0x100000);
  uVar2 = FUN_088fe708(PTR_s_worldmap_bin_089d8374,uVar1,0x100000,0);
  FUN_088fe944(PTR_s_worldmap_bin_089d8374,uVar1,uVar2);
  FUN_0885c93c(uVar1);
  iVar3 = FUN_0885ca98(uVar1,1,0x6f726e73,0);
  if (iVar3 != 0) {
    FUN_08912d4c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  iVar3 = FUN_0885ca98(uVar1,1,0x6e656d77,0);
  if (iVar3 != 0) {
    FUN_089132c8(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  if (param_1 == '\0') {
    iVar3 = FUN_0885ca3c(uVar1,4,0);
    if (iVar3 != 0) {
      FUN_0890f1bc(DAT_089d8378,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    }
    iVar3 = FUN_0885ca98(uVar1,1,0x73756170,0);
    if (iVar3 != 0) {
      FUN_088cdcb0(DAT_089d83d8 + 0x3c0,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    }
    DAT_089d8370 = 0xffffffff;
    iVar3 = FUN_0885ca3c(uVar1,0xe,0);
    if (iVar3 != 0) {
      FUN_0893476c(auStack_40,"worldmap");
      DAT_089d8370 = FUN_088a0dbc(DAT_089d6c80,auStack_40,*(undefined4 *)(iVar3 + 8),
                                  *(undefined4 *)(iVar3 + 0xc),1);
    }
  }
  FUN_089111c4(uVar1);
  return;
}

