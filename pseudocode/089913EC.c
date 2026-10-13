/* Entry 0x089913EC | file offset 0x0018E3C4 | FUN_089913ec | bytes 628 */

undefined4 FUN_089913ec(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar5 = DAT_089da420;
  *(undefined1 *)(DAT_089da420 + 0x23e) = 0;
  *(undefined1 *)((int)puVar5 + 0x8f9) = 0;
  puVar5[0xc] = 0x1000;
  puVar5[9] = 0;
  puVar5[6] = 0x3f800000;
  puVar5[10] = 0;
  *puVar5 = param_1;
  iVar1 = sceAudioOutput2Reserve(param_1);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_089a4ed4(param_1);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      FUN_089a53e4(4);
      FUN_089a52bc(1,1);
      FUN_089a5350(0x1000,0x1000);
      puVar5 = DAT_089da420;
      uVar4 = 0;
      puVar6 = DAT_089da420;
      do {
        puVar6[0x5d] = 0xffffffff;
        puVar6[0x5e] = 0;
        puVar6[0x60] = 0x1000;
        puVar6[0x61] = 0x1000;
        puVar6[0x62] = 0;
        puVar6[99] = 0;
        puVar6[100] = 0;
        puVar6[0x5f] = 0;
        puVar6[0x67] = 0;
        puVar6[0x68] = 0;
        puVar6[0x69] = 0;
        *(undefined1 *)(puVar6 + 0x6a) = 0;
        puVar6[0x6b] = 0;
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 0xf;
      } while (uVar4 < 0x20);
      uVar4 = 0;
      do {
        puVar5[0xd] = 0;
        *(undefined1 *)(puVar5 + 0xe) = 0;
        puVar5[0xf] = 0xffffffff;
        puVar5[0x10] = 0;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 4;
      } while (uVar4 < 0x14);
      uVar8 = FUN_089937d4(0x2e48e8a7,0x3fe921ff);
      uVar2 = FUN_0899aa14((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      puVar5 = DAT_089da420;
      uVar4 = 0;
      DAT_089da420[0x23d] = uVar2;
      iVar1 = 0;
      do {
        if (param_2 < 1) {
          *(undefined4 *)((int)puVar5 + iVar1 + 8) = 0;
        }
        else {
          iVar3 = FUN_089928e0(0x54);
          iVar7 = 0;
          if (iVar3 != 0) {
            FUN_08992090(iVar3);
            iVar7 = iVar3;
          }
          puVar5 = DAT_089da420;
          *(int *)((int)DAT_089da420 + iVar1 + 8) = iVar7;
        }
        uVar4 = uVar4 + 1;
        param_2 = param_2 + -1;
        iVar1 = iVar1 + 4;
      } while (uVar4 < 4);
      puVar5[7] = 0;
      *(undefined1 *)(puVar5 + 8) = 0;
      puVar5[0x23f] = 0;
      uVar2 = sceKernelCreateThread("AUDIO MIXER THREAD",FUN_08991d60,0x10,0x10000,0,0);
      DAT_089da420[1] = uVar2;
      uVar2 = sceKernelCreateSema("VOICE LOCK",0,1,1,0);
      DAT_089da420[0xb] = uVar2;
      uVar2 = sceKernelCreateSema("STREAM LOCK",0,1,1,0);
      puVar5 = DAT_089da420 + 1;
      DAT_089da420[0x240] = uVar2;
      iVar1 = sceKernelStartThread(*puVar5,0,0);
      if (iVar1 < 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

