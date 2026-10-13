/* Entry 0x0894EAB8 | file offset 0x0014BA90 | FUN_0894eab8 | bytes 240 */

undefined4
FUN_0894eab8(float param_1,float param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_6 + 0x20);
  fVar4 = *(float *)(param_6 + 0x24);
  fVar6 = *(float *)(param_6 + 0x28);
  fVar8 = *(float *)(param_7 + 0x14);
  fVar1 = *(float *)(param_7 + 0x18);
  fVar3 = *(float *)(param_7 + 0x1c);
  fVar7 = *(float *)(param_5 + 0x10) + (fVar5 - *(float *)(param_7 + 0x10));
  fVar2 = *(float *)(param_6 + 0x2c);
  *(float *)(param_6 + 0x20) = fVar7;
  fVar8 = *(float *)(param_5 + 0x14) + (fVar4 - fVar8);
  *(float *)(param_6 + 0x24) = fVar8;
  fVar1 = *(float *)(param_5 + 0x18) + (fVar6 - fVar1);
  *(float *)(param_6 + 0x28) = fVar1;
  fVar3 = *(float *)(param_5 + 0x1c) + (fVar2 - fVar3);
  *(float *)(param_6 + 0x2c) = fVar3;
  *(float *)(param_6 + 0x10) = (fVar5 * param_2 + *(float *)(param_6 + 0x10)) - fVar7 * param_1;
  *(float *)(param_6 + 0x14) = (fVar4 * param_2 + *(float *)(param_6 + 0x14)) - fVar8 * param_1;
  *(float *)(param_6 + 0x18) = (fVar6 * param_2 + *(float *)(param_6 + 0x18)) - fVar1 * param_1;
  *(float *)(param_6 + 0x1c) = (fVar2 * param_2 + *(float *)(param_6 + 0x1c)) - fVar3 * param_1;
  (**(code **)(*param_3 + 0x1c))((int)param_3 + (int)*(short *)(*param_3 + 0x18));
  return 1;
}

