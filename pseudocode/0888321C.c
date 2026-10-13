/* Entry 0x0888321C | file offset 0x000801F4 | FUN_0888321c | bytes 292 */

void FUN_0888321c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,0x19e10,FUN_088838f8,"VOLATILE_MEMORY_LOADER::Update");
  DAT_089d69c8 = sceKernelCreateCallback("VOLATILE_MEMORY_LOADER",FUN_08883998,0);
  scePowerRegisterCallback(1,DAT_089d69c8);
  DAT_089d69df = 0;
  iVar2 = FUN_088820d8(0x1e04);
  iVar3 = 0;
  DAT_089d69c4 = iVar2;
  if (iVar2 != 0) {
    FUN_08993560(iVar2,0x40,0x74,FUN_08882f00);
    iVar4 = 0;
    *(undefined4 *)(iVar2 + 0x1e00) = 0;
    do {
      *(int *)(iVar2 + iVar4 * 4 + 0x1d00) = iVar2 + (0x3f - iVar4) * 0x74;
      iVar4 = *(int *)(iVar2 + 0x1e00) + 1;
      *(int *)(iVar2 + 0x1e00) = iVar4;
      iVar3 = iVar2;
    } while (iVar4 < 0x40);
  }
  DAT_089d69c0 = iVar3;
  DAT_089d69d8 = FUN_08882118(0x4000,0x80);
  return;
}

