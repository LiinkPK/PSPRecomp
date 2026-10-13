/* Entry 0x0890E61C | file offset 0x0010B5F4 | FUN_0890e61c | bytes 232 */

void FUN_0890e61c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_089d836c == '\0') {
    sceUtilityLoadModule(0x100);
    sceUtilityLoadModule(0x101);
    sceNetInit(0x19000,0x1e,0,0x1e,0);
    puVar3 = &DAT_09b6b3e0;
    FUN_0890e7d8(DAT_089d6010);
    DAT_09b6b3d8 = 0;
    iVar2 = 0;
    do {
      *puVar3 = 0xffffffff;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 4);
    uVar1 = FUN_08882274(DAT_089d69a8);
    DAT_089d8368 = FUN_088823c4(uVar1,0xffffffff,7000,FUN_0890e794,"NETWORK_MANAGER::Update");
    DAT_089d836c = '\x01';
  }
  return;
}

