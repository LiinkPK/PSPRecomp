/* Entry 0x089853B4 | file offset 0x0018238C | FUN_089853b4 | bytes 240 */

void FUN_089853b4(undefined4 param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(ushort *)(param_3 + 0x54);
  uVar2 = *(ushort *)(param_3 + 0x52);
  fVar7 = (float)uVar1 / (float)param_6;
  uVar3 = *(ushort *)(param_3 + 0x58);
  uVar4 = *(ushort *)(param_3 + 0x56);
  param_2[2] = fVar7;
  fVar5 = (float)((uint)uVar1 + (uint)uVar3) / (float)param_6;
  *param_2 = (float)uVar2 / (float)param_7;
  param_2[4] = fVar5;
  param_2[1] = (float)((uint)uVar2 + (uint)uVar4) / (float)param_7;
  fVar6 = fVar7 + (fVar5 - fVar7) * 0.5;
  param_2[3] = fVar6;
  if (param_4 == 1) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)(param_4 + -1);
    if (param_4 + -1 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = (fVar6 - fVar7) / fVar8;
  }
  param_2[5] = fVar8;
  if (param_5 == 1) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(param_5 + -1);
    if (param_5 + -1 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (fVar5 - fVar6) / fVar7;
  }
  param_2[6] = fVar7;
  return;
}

