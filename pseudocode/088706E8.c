/* Entry 0x088706E8 | file offset 0x0006D6C0 | FUN_088706e8 | bytes 212 */

/* WARNING: Removing unreachable block (ram,0x0887076c) */

void FUN_088706e8(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar6 = 0xddff;
  if (0 < param_4) {
    do {
      uVar3 = uVar6 * 0x15a4e35 + 1 >> 0x10;
      uVar4 = uVar3 & 0x7fff;
      uVar2 = uVar4 * 0x15a4e35 + 1 >> 0x10;
      uVar6 = (uVar2 & 0x7fff) * 0x15a4e35 + 1 >> 0x10 & 0x7fff;
      if ((int)uVar4 < 0) {
        bVar1 = *(byte *)(param_1 - (-uVar4 & 3));
      }
      else {
        bVar1 = *(byte *)(param_1 + (uVar3 & 3));
      }
      *(byte *)(param_3 + iVar5) = bVar1 ^ *(byte *)(param_2 + (uVar2 & 7)) ^ (byte)uVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
  return;
}

