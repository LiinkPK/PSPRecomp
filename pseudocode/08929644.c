/* Entry 0x08929644 | file offset 0x0012661C | FUN_08929644 | bytes 524 */

void FUN_08929644(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  
  FUN_08935828(param_1,0,0x6b0c);
  FUN_08935524(param_1,"ORGQUEST",8);
  *(undefined4 *)(param_1 + 8) = 0x20101007;
  FUN_08935524(param_1 + 0x14,DAT_089d712c + 0x1fe08,0x1a);
  FUN_088adfcc(param_1 + 0x48);
  iVar4 = 0;
  iVar2 = param_1;
  do {
    *(undefined2 *)(iVar2 + 0x15c) = 0xffff;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar4 < 3);
  iVar4 = 0;
  puVar6 = (undefined1 *)(param_1 + 0x8a0);
  puVar7 = (undefined1 *)(param_1 + 0x1700);
  puVar8 = (undefined2 *)(param_1 + 0x1ac);
  iVar2 = param_1;
  do {
    *(undefined1 *)(iVar2 + 0x8a0) = 0;
    *(undefined1 *)(iVar2 + 0x1700) = 0;
    *(undefined1 *)(iVar2 + 0x1706) = 0xff;
    *(undefined1 *)(iVar2 + 0x1707) = 0xff;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0xff;
    puVar6[7] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0xff;
    puVar7[7] = 0;
    *puVar8 = 0xffff;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0xff;
    *(undefined1 *)((int)puVar8 + 9) = 0xff;
    *(undefined1 *)(puVar8 + 6) = 0xff;
    *(undefined1 *)((int)puVar8 + 0xd) = 0xff;
    FUN_0892a13c(puVar8 + 8);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x2e0;
    puVar6 = puVar6 + 0x2e0;
    puVar7 = puVar7 + 0x2e0;
    puVar8 = puVar8 + 0xb2;
  } while (iVar4 < 5);
  iVar4 = 0;
  iVar2 = param_1;
  do {
    iVar3 = 0;
    puVar6 = (undefined1 *)(iVar2 + 0x2560);
    do {
      *puVar6 = 0xff;
      *(undefined2 *)(puVar6 + 2) = 0xffff;
      iVar5 = 0;
      puVar7 = puVar6;
      do {
        *(undefined2 *)(puVar7 + 4) = 0xffff;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 2;
      } while (iVar5 < 5);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 0x10;
    } while (iVar3 < 0x16);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x160;
  } while (iVar4 < 0xd);
  iVar2 = 1;
  do {
    bVar1 = iVar2 < 0xd;
    iVar2 = iVar2 + 1;
  } while (bVar1);
  iVar2 = 0;
  param_1 = param_1 + 0x3740;
  do {
    FUN_08935828(param_1,0,0x66);
    *(undefined2 *)(param_1 + 100) = 10;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x66;
  } while (iVar2 < 0x82);
  return;
}

