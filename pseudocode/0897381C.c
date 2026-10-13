/* Entry 0x0897381C | file offset 0x001707F4 | FUN_0897381c | bytes 1168 */

void FUN_0897381c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  
  iVar10 = 0x20;
  if (*(int *)(&DAT_089d0628 + param_1[8] * 4) == 3) {
    iVar10 = 0x10;
  }
  iVar12 = (int)param_1[9] / iVar10;
  pfVar1 = (float *)FUN_089a00f4(iVar12 * 0x28);
  uVar2 = FUN_089a04e8();
  FUN_089a296c(2);
  FUN_089a29c4();
  FUN_089a250c();
  FUN_089a2568();
  FUN_089a2a40();
  FUN_089a296c(1);
  FUN_089a29c4();
  FUN_089a250c();
  FUN_089a2568();
  FUN_089a2a40();
  FUN_089a296c(0);
  FUN_089a29c4();
  FUN_089a250c();
  FUN_089a2820(0,(float)(int)param_1[9],(float)(int)param_1[10],0,0xbf800000,0x3f800000);
  FUN_089a2568();
  FUN_089a2a40();
  iVar9 = 1;
  if (1 < (int)param_1[5]) {
    for (iVar9 = 2; iVar9 < (int)param_1[5]; iVar9 = iVar9 << 1) {
    }
  }
  iVar8 = 1;
  if (1 < (int)param_1[6]) {
    for (iVar8 = 2; iVar8 < (int)param_1[6]; iVar8 = iVar8 << 1) {
    }
  }
  iVar3 = 0;
  if (0 < iVar12) {
    iVar4 = 0;
    pfVar7 = pfVar1;
    do {
      iVar5 = param_1[9];
      fVar11 = (float)iVar4;
      iVar6 = param_1[5];
      pfVar7[1] = 0.0;
      pfVar7[2] = fVar11;
      iVar3 = iVar3 + 1;
      pfVar7[3] = 0.0;
      pfVar7[4] = 0.0;
      iVar4 = iVar4 + iVar10;
      *pfVar7 = ((fVar11 / (float)iVar5) * (float)iVar6) / (float)iVar9;
      pfVar7[5] = (((float)(iVar3 * iVar10) / (float)(int)param_1[9]) * (float)(int)param_1[5]) /
                  (float)iVar9;
      iVar5 = param_1[6];
      pfVar7[7] = (float)(iVar3 * iVar10);
      pfVar7[6] = (float)iVar5 / (float)iVar8;
      iVar5 = param_1[10];
      pfVar7[9] = 0.0;
      pfVar7[8] = (float)iVar5;
      pfVar7 = pfVar7 + 10;
    } while (iVar3 < iVar12);
  }
  FUN_089a0fc8();
  FUN_089a02e0(*(undefined4 *)(&DAT_089d0628 + param_1[0xb] * 4),param_3,param_1[9]);
  FUN_089a1200(0,0,param_1[9],param_1[10]);
  FUN_089a0aec(0x800,0x800,param_1[9],param_1[10]);
  FUN_089a0be4((0x1000 - param_1[9]) / 2,(0x1000 - param_1[10]) / 2);
  FUN_089a0e20(0,0);
  FUN_089a0df4(1,1);
  FUN_089a0db8(*(undefined4 *)(&DAT_089d0628 + param_1[8] * 4),0,0,0);
  FUN_089a0f04(0,iVar9,iVar8,param_1[7],param_2);
  FUN_089a001c(0x3f800000,0x3f800000);
  FUN_089a0f84(0,0);
  FUN_089a03dc(0);
  FUN_089a03dc(1);
  FUN_089a03dc(4);
  FUN_089a03dc(7);
  FUN_089a03dc(10);
  FUN_089a03dc(0x15);
  FUN_089a0384(9);
  FUN_089a0c8c(0xffffffff);
  FUN_089a0520(6,0x183,iVar12 * 2,0,pfVar1);
  FUN_089a0ee4();
  FUN_089a02e0(*(undefined4 *)(&DAT_089d0628 + param_1[8] * 4),*param_1,0x200);
  FUN_089a1200(0,0,param_1[5],param_1[6]);
  FUN_089a0aec(0x800,0x800,param_1[5],param_1[6]);
  FUN_089a0be4(0x710,0x778);
  FUN_089a0e20(0,1);
  FUN_089a0df4(7,1);
  FUN_0899fdc4(uVar2);
  FUN_089a296c(2);
  FUN_089a2568();
  FUN_089a296c(1);
  FUN_089a2568();
  FUN_089a296c(0);
  FUN_089a2568();
  return;
}

