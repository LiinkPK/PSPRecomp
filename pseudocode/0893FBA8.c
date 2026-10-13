/* Entry 0x0893FBA8 | file offset 0x0013CB80 | FUN_0893fba8 | bytes 256 */

void FUN_0893fba8(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  
  puVar4 = (undefined1 *)*param_1;
  iVar1 = FUN_0893f920(param_2);
  if (iVar1 == 0) {
    param_2 = DAT_089d912c;
  }
  if (param_2 < 0x80) {
    *puVar4 = (char)param_2;
    pbVar5 = puVar4 + 1;
  }
  else {
    uVar2 = 0x800;
    iVar1 = 1;
    if (0x7ff < param_2) {
      do {
        uVar2 = uVar2 << 5;
        iVar1 = iVar1 + 1;
      } while (uVar2 <= param_2);
    }
    pbVar5 = puVar4 + iVar1 + 1;
    uVar2 = (1 << (7U - iVar1 & 0x1f)) - 1;
    pbVar3 = pbVar5;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = (byte)param_2 & 0x3f | 0x80;
      param_2 = param_2 >> 6;
    }
    pbVar3[-1] = ~(byte)uVar2 | (byte)param_2 & (byte)((int)(uVar2 & 0xff) >> 1);
  }
  *param_1 = pbVar5;
  return;
}

