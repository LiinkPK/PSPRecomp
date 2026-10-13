/* Entry 0x0899D7CC | file offset 0x0019A7A4 | FUN_0899d7cc | bytes 156 */

void FUN_0899d7cc(byte *param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar2 = (param_3 + 1) / 2;
  uVar6 = iVar2 + 0xfU & 0xfffffff0;
  pbVar5 = param_1 + uVar6 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar6 = -uVar6;
    pbVar5 = param_1;
  }
  if (0 < param_4) {
    do {
      iVar1 = iVar2;
      pbVar3 = pbVar5;
      pbVar4 = param_2;
      if (0 < iVar2) {
        do {
          iVar1 = iVar1 + -1;
          *pbVar3 = *pbVar4 << 4 | (byte)((int)(uint)*pbVar4 >> 4);
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar1 != 0);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + (iVar2 + 3U & 0xfffffffc);
      pbVar5 = pbVar5 + -uVar6;
    } while (param_4 != 0);
  }
  return;
}

