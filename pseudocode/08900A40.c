/* Entry 0x08900A40 | file offset 0x000FDA18 | FUN_08900a40 | bytes 316 */

undefined4 FUN_08900a40(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  psVar1 = (short *)FUN_088b36fc(*(undefined4 *)(param_1 + 4));
  if ((DAT_089d5f20 == '\x01') &&
     (FUN_08901d48(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x10) + 1,psVar1),
     (*(uint *)(param_1 + 0x1c) & 2) != 0)) {
    *(uint *)(DAT_089d726c + 0x180) = *(uint *)(DAT_089d726c + 0x180) | 0x4000000;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x10) < *psVar1 + -1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    FUN_08901ea4(param_1,1);
    uVar3 = 1;
  }
  else {
    uVar5 = (uint)*(short *)(*(int *)(psVar1 + 6) + 4);
    if (-1 < (int)uVar5) {
      puVar4 = (uint *)(DAT_089d726c + (uVar5 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << (uVar5 & 0x1f);
    }
    iVar2 = FUN_08900e9c(param_1);
    if (iVar2 == 0) {
      *(int *)(DAT_089d712c + 0x3e0ac) = *(int *)(DAT_089d712c + 0x3e0ac) + 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}

