/* Entry 0x0895E528 | file offset 0x0015B500 | FUN_0895e528 | bytes 624 */

void FUN_0895e528(uint *param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)FUN_089a00f4(*param_1 * 0x30 + 0x30);
  uVar8 = (int)*param_2 | (int)param_2[1] << 8 | (int)param_2[2] << 0x10 | (int)param_2[3] << 0x18;
  uVar3 = (int)*param_3 | (int)param_3[1] << 8 | (int)param_3[2] << 0x10 | (int)param_3[3] << 0x18;
  uVar4 = 1;
  uVar5 = param_1[0xe];
  puVar2 = puVar1;
  if (*param_1 != 0) {
    iVar6 = 8;
    iVar7 = 0x10;
    do {
      *puVar2 = *(undefined4 *)(uVar5 + iVar6);
      puVar2[1] = *(undefined4 *)(param_1[0xe] + iVar6 + 4);
      puVar2[2] = uVar3;
      puVar2[3] = *(undefined4 *)(param_1[0x10] + iVar7);
      puVar2[4] = *(undefined4 *)(param_1[0x10] + iVar7 + 4);
      puVar2[5] = *(undefined4 *)(param_1[0x10] + iVar7 + 8);
      puVar2[6] = *(undefined4 *)(param_1[0xd] + iVar6);
      puVar2[7] = *(undefined4 *)(param_1[0xd] + iVar6 + 4);
      puVar2[8] = uVar8;
      puVar2[9] = *(undefined4 *)(param_1[0xf] + iVar7);
      puVar2[10] = *(undefined4 *)(param_1[0xf] + iVar7 + 4);
      puVar2[0xb] = *(undefined4 *)(param_1[0xf] + iVar7 + 8);
      puVar2 = puVar2 + 0xc;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 8;
      iVar7 = iVar7 + 0x10;
      uVar5 = param_1[0xe];
    } while (uVar4 <= *param_1);
  }
  *puVar2 = *(undefined4 *)(uVar5 + 8);
  puVar2[1] = *(undefined4 *)(param_1[0xe] + 0xc);
  puVar2[2] = uVar3;
  puVar2[3] = *(undefined4 *)(param_1[0x10] + 0x10);
  puVar2[4] = *(undefined4 *)(param_1[0x10] + 0x14);
  puVar2[5] = *(undefined4 *)(param_1[0x10] + 0x18);
  puVar2[6] = *(undefined4 *)(param_1[0xd] + 8);
  puVar2[7] = *(undefined4 *)(param_1[0xd] + 0xc);
  puVar2[8] = uVar8;
  puVar2[9] = *(undefined4 *)(param_1[0xf] + 0x10);
  puVar2[10] = *(undefined4 *)(param_1[0xf] + 0x14);
  puVar2[0xb] = *(undefined4 *)(param_1[0xf] + 0x18);
  FUN_089a0520(4,0x19f,*param_1 * 2 + 2,0,puVar1);
  return;
}

