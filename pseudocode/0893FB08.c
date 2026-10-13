/* Entry 0x0893FB08 | file offset 0x0013CAE0 | FUN_0893fb08 | bytes 160 */

uint FUN_0893fb08(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar4 = (byte *)*param_1;
  uVar1 = (uint)*pbVar4;
  pbVar5 = pbVar4 + 1;
  uVar2 = uVar1;
  if (((0x7f < uVar1) && (uVar2 = DAT_089d912c, 0xc1 < uVar1)) && (uVar1 < 0xf5)) {
    uVar1 = uVar1 & 0x3f;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar5;
    for (uVar3 = 0x800; pbVar5 = pbVar4, uVar2 = uVar1 << 6 | *pbVar6 & 0x3f, uVar3 <= uVar2;
        uVar3 = uVar3 << 5) {
      uVar1 = uVar2 & uVar3 - 1;
      pbVar4 = pbVar5 + 1;
      pbVar6 = pbVar5;
    }
  }
  *param_1 = pbVar5;
  return uVar2;
}

