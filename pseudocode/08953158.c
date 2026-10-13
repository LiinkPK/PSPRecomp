/* Entry 0x08953158 | file offset 0x00150130 | FUN_08953158 | bytes 192 */

undefined4
FUN_08953158(float param_1,float param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_6 + 0x20);
  fVar5 = *(float *)(param_6 + 0x24);
  fVar4 = *(float *)(param_7 + 0x14);
  fVar6 = *(float *)(param_6 + 0x28);
  fVar1 = *(float *)(param_7 + 0x18);
  fVar2 = *(float *)(param_5 + 0x10) + (fVar3 - *(float *)(param_7 + 0x10));
  *(float *)(param_6 + 0x20) = fVar2;
  fVar4 = *(float *)(param_5 + 0x14) + (fVar5 - fVar4);
  *(float *)(param_6 + 0x24) = fVar4;
  fVar1 = *(float *)(param_5 + 0x18) + (fVar6 - fVar1);
  *(float *)(param_6 + 0x28) = fVar1;
  *(float *)(param_6 + 0x10) = (fVar3 * param_2 + *(float *)(param_6 + 0x10)) - fVar2 * param_1;
  *(float *)(param_6 + 0x14) = (fVar5 * param_2 + *(float *)(param_6 + 0x14)) - fVar4 * param_1;
  *(float *)(param_6 + 0x18) = (fVar6 * param_2 + *(float *)(param_6 + 0x18)) - fVar1 * param_1;
  (**(code **)(*param_3 + 0x1c))((int)param_3 + (int)*(short *)(*param_3 + 0x18));
  return 1;
}

