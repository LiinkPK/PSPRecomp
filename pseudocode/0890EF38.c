/* Entry 0x0890EF38 | file offset 0x0010BF10 | FUN_0890ef38 | bytes 580 */

void FUN_0890ef38(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_088fe7c8(PTR_s_worldmap_bin_089d8374,0);
  uVar2 = FUN_0891118c(0x100000);
  FUN_088fe708(PTR_s_worldmap_bin_089d8374,uVar2,0x100000,0);
  FUN_0885c93c(uVar2);
  iVar3 = FUN_0885ca98(uVar2,1,0x656e6577,0);
  if (iVar3 != 0) {
    FUN_0891314c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  iVar3 = FUN_0885ca98(uVar2,1,0x69726677,0);
  uVar1 = DAT_089d4788;
  if (iVar3 != 0) {
    uVar4 = FUN_089110b4();
    FUN_08810dd8(uVar1,uVar4,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  iVar3 = FUN_0885ca98(uVar2,1,0x646e7266,0);
  if (iVar3 != 0) {
    FUN_0890f41c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  iVar3 = FUN_0885ca98(uVar2,1,0x706c7477,0);
  if (iVar3 != 0) {
    FUN_08912fc8(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  iVar3 = FUN_0885ca98(uVar2,1,0x5f746f6e,0);
  if (iVar3 != 0) {
    FUN_0891094c(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  }
  FUN_089111c4(uVar2);
  return;
}

