/* Entry 0x089BCF88 | file offset 0x001B9F60 | FUN_089bcf88 | bytes 128 */

void FUN_089bcf88(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar3;
  
  if (param_1 != 0) {
    *(char *)(param_1 + 0x1c) = (char)param_2;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar5 = *(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
      if (uVar5 == 0) {
        uVar2 = 0;
        uVar4 = 0xff;
      }
      else {
        uVar5 = uVar5 ^ uVar5 >> 1;
        iVar6 = 1;
        if (-1 < param_2 + -1) {
          iVar1 = 0;
          do {
            iVar1 = iVar1 + 1;
            iVar6 = iVar6 + (uVar5 ^ uVar5 - iVar6);
          } while (param_2 != iVar1);
        }
        uVar5 = uVar5 ^ uVar5 - iVar6;
        uVar3 = uVar5 >> 1 & 0x55555555 | (uVar5 & 0x55555555) << 1;
        uVar3 = uVar3 >> 2 & 0x33333333 | (uVar3 & 0x33333333) << 2;
        uVar3 = uVar3 >> 4 & 0xf0f0f0f | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = uVar3 >> 8 & 0xff00ff | (uVar3 & 0xff00ff) << 8;
        uVar3 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar2 = (undefined1)uVar3;
        uVar4 = (undefined1)(uVar5 >> (uVar3 & 0x1f));
      }
      if (param_1 != 0) {
        *(undefined1 *)(param_1 + 0x1d) = uVar2;
        *(undefined1 *)(param_1 + 0x1e) = uVar4;
        *(undefined1 *)(param_1 + 0x1f) = 0;
        FUN_089bcedc(param_1,0);
        FUN_089bce84(param_1,0);
        return;
      }
      return;
    }
  }
  return;
}

