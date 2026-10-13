/* Entry 0x088C69E8 | file offset 0x000C39C0 | FUN_088c69e8 | bytes 148 */

void FUN_088c69e8(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (0 < param_2) {
    DAT_089d7728 = FUN_088820d8(0x400);
    FUN_08935524(DAT_089d7728,param_1,param_2);
    uVar1 = *(byte *)(DAT_089d7728 + 3) + 3 & 0xfffffffc;
    DAT_089d7730 = DAT_089d7728 + uVar1 + 4;
    DAT_089d772c = DAT_089d7728 + (uVar1 + (uint)*(byte *)(DAT_089d7728 + 2) * 2 + 3 & 0xfffffffc) +
                   4;
  }
  return;
}

