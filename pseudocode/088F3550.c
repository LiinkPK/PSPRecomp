/* Entry 0x088F3550 | file offset 0x000F0528 | FUN_088f3550 | bytes 436 */

void FUN_088f3550(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  short *psVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar2 = FUN_088cb164(DAT_089d712c + 0xf58,param_3);
  puVar8 = (undefined4 *)(param_1 + param_2 * 0xd8);
  iVar2 = iVar2 + 0x10;
  *puVar8 = param_3;
  iVar10 = 0;
  puVar9 = puVar8 + 1;
  do {
    iVar5 = 0;
    puVar4 = puVar9;
    do {
      iVar3 = FUN_088b7b18(iVar2,iVar5);
      *(short *)puVar4 = (short)iVar3;
      if (iVar3 != -1) {
        FUN_088b765c(iVar2,iVar5,0xffffffff);
      }
      iVar5 = iVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    } while (iVar5 < 4);
    iVar5 = 0;
    psVar6 = (short *)(iVar2 + 0xa2);
    puVar4 = puVar9;
    do {
      sVar1 = *psVar6;
      *(short *)(puVar4 + 2) = sVar1;
      if (sVar1 != -1) {
        FUN_088b766c(iVar2,iVar5,0xffffffff);
      }
      iVar5 = iVar5 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      psVar6 = psVar6 + 1;
    } while (iVar5 < 10);
    *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(iVar2 + 0xba);
    FUN_088b767c(iVar2,0xffffffff);
    iVar5 = 0;
    puVar7 = (undefined1 *)(iVar2 + 0xbb);
    puVar4 = puVar8;
    do {
      *(undefined1 *)((int)puVar4 + 0x21) = *puVar7;
      *(undefined1 *)((int)puVar4 + 0x22) = puVar7[1];
      FUN_088b7684(iVar2,iVar5,0xffffffff,0);
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 2;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    } while (iVar5 < 5);
    *(undefined1 *)((int)puVar8 + 0x2b) = *(undefined1 *)(iVar2 + 0xb8);
    *(undefined1 *)(iVar2 + 0xb8) = 0xff;
    iVar10 = iVar10 + 1;
    *(undefined1 *)(puVar8 + 0xb) = *(undefined1 *)(iVar2 + 0xb9);
    *(undefined1 *)(iVar2 + 0xb9) = 1;
    iVar2 = iVar2 + 0xc6;
    puVar8 = (undefined4 *)((int)puVar8 + 0x2a);
    puVar9 = (undefined4 *)((int)puVar9 + 0x2a);
  } while (iVar10 < 5);
  return;
}

