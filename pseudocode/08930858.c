/* Entry 0x08930858 | file offset 0x0012D830 | FUN_08930858 | bytes 380 */

void FUN_08930858(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [4];
  undefined2 local_4c [20];
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  FUN_08930a4c();
  iVar8 = 0;
  iVar7 = param_1;
  do {
    uVar3 = FUN_088daa68(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar7 + 0xc) = uVar3;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar8 < 4);
  if ((param_5 < 0) || (4 < param_5)) {
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar5 = (&DAT_089cf1b8)[param_5 * 2];
    *(int *)(param_1 + 0x54) = param_5;
  }
  FUN_08935524(local_4c,&DAT_089d8540,0x28);
  local_4c[5] = uVar5;
  iVar7 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x1c);
  puVar6 = local_4c;
  do {
    uVar5 = puVar6[1];
    uVar1 = puVar6[2];
    uVar2 = puVar6[3];
    *puVar4 = *puVar6;
    puVar4[1] = uVar5;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 4;
    puVar6 = puVar6 + 4;
  } while (iVar7 < 5);
  FUN_088da0a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),auStack_90,auStack_50);
  FUN_088d9b84(*(undefined4 *)(param_1 + 0xc),auStack_90);
  FUN_088d9af4(*(undefined4 *)(param_1 + 0xc),auStack_50);
  FUN_088d3cf0(0,param_1 + 0xc,param_1 + 0x1c);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xe) = 0x1a;
  FUN_08930700(param_1);
  return;
}

