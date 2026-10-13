/* Entry 0x0895DEC4 | file offset 0x0015AE9C | FUN_0895dec4 | bytes 404 */

void FUN_0895dec4(int *param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)FUN_089a00f4(*param_1 * 0x14 + 0x28);
  FUN_089a0c8c((int)*param_2 | (int)param_2[1] << 8 | (int)param_2[2] << 0x10 |
               (int)param_2[3] << 0x18);
  uVar3 = 0;
  iVar2 = param_1[0xd];
  puVar6 = puVar1;
  if (*param_1 != -1) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      *puVar6 = *(undefined4 *)(iVar2 + iVar5);
      puVar6[1] = *(undefined4 *)(param_1[0xd] + iVar5 + 4);
      puVar6[2] = *(undefined4 *)(param_1[0xf] + iVar4);
      puVar6[3] = *(undefined4 *)(param_1[0xf] + iVar4 + 4);
      puVar6[4] = *(undefined4 *)(param_1[0xf] + iVar4 + 8);
      puVar6 = puVar6 + 5;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 8;
      iVar4 = iVar4 + 0x10;
      iVar2 = param_1[0xd];
    } while (uVar3 < *param_1 + 1U);
  }
  *puVar6 = *(undefined4 *)(iVar2 + 8);
  puVar6[1] = *(undefined4 *)(param_1[0xd] + 0xc);
  puVar6[2] = *(undefined4 *)(param_1[0xf] + 0x10);
  puVar6[3] = *(undefined4 *)(param_1[0xf] + 0x14);
  puVar6[4] = *(undefined4 *)(param_1[0xf] + 0x18);
  FUN_089a0520(5,0x183,*param_1 + 2,0,puVar1);
  return;
}

