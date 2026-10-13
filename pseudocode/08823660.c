/* Entry 0x08823660 | file offset 0x00020638 | FUN_08823660 | bytes 528 */

void FUN_08823660(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar7 = 0;
  iVar2 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x28) + iVar6;
      if ((*(byte *)(iVar4 + 299) & 2) == 0) {
        fVar8 = (float)FUN_089a3bf8(iVar4 + 0xa0);
        *(byte *)(iVar4 + 0x129) = *(byte *)(iVar4 + 0x129) & 0x7f | (fVar8 != 0.0) << 7;
        FUN_089a383c(0,0,0,0x3f800000,iVar4 + 0xc0);
        FUN_089a383c(0,0,0,0x3f800000,iVar4 + 0xb0);
        *(byte *)(iVar4 + 299) =
             *(byte *)(iVar4 + 299) & 0xf7 |
             (byte)((((int)(char)*(byte *)(iVar4 + 299) & 4U) >> 2) << 3);
        *(byte *)(iVar4 + 299) = *(byte *)(iVar4 + 299) & 0xfb;
        *(byte *)(iVar4 + 299) = *(byte *)(iVar4 + 299) & 0xef;
        *(byte *)(iVar4 + 299) = *(byte *)(iVar4 + 299) & 0xdf;
        cVar1 = *(char *)(iVar4 + 0x129);
        uVar3 = (int)*(char *)(iVar4 + 0x12a) & 0x3f;
        iVar4 = 0;
        if (uVar3 != 0) {
          do {
            iVar5 = *(int *)(param_1 + 0x2c) + (((int)cVar1 & 0x7fU) + iVar4) * 0x80;
            FUN_089a3868(iVar5 + 0x10,iVar5);
            *(undefined4 *)(iVar5 + 0x74) = 0x7f7fffff;
            *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xfe;
            iVar4 = iVar4 + 1;
            *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xfd;
          } while (iVar4 < (int)uVar3);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x130;
    } while (iVar7 < iVar2);
  }
  return;
}

